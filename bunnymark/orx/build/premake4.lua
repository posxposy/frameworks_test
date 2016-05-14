-- This premake script should be used with the orx-customized version of premake4.
-- Its Mercurial repository can be found at https://bitbucket.org/orx/premake-stable.
-- A copy, including binaries, can also be found in the extern/premake folder of any orx distributions.

--
-- Globals
--

function initconfigurations ()
    return
    {
        "Debug",
        "Release"
    }
end

function initplatforms ()
    if os.is ("windows") then
        if string.lower(_ACTION) == "vs2013" then
            return
            {
                "x64",
                "x32"
            }
        else
            return
            {
                "Native"
            }
        end
    elseif os.is ("macosx") then
        if string.find(string.lower(_ACTION), "xcode") then
            return
            {
                "Universal"
            }
        else
            return
            {
                "x32", "x64"
            }
        end
    elseif os.is64bit () then
        return
        {
            "x64",
            "x32"
        }
    else
        return
        {
            "x32",
            "x64"
        }
    end
end

function defaultaction (name, action)
   if os.is (name) then
      _ACTION = _ACTION or action
   end
end

defaultaction ("windows", "vs2013")
defaultaction ("linux", "gmake")
defaultaction ("macosx", "xcode4")

if os.is ("macosx") then
    osname = "mac"
else
    osname = os.get()
end

destination = "./" .. osname .. "/" .. _ACTION
copybase = path.rebase ("..", os.getcwd (), os.getcwd () .. "/" .. destination)


--
-- Solution: BunnyMark
--

solution "BunnyMark"

    language ("C++")

    location (destination)

    kind ("ConsoleApp")

    configurations
    {
        initconfigurations ()
    }

    platforms
    {
        initplatforms ()
    }

    includedirs
    {
        "../include",
        "../include/orx"
    }

    flags
    {
        "NoPCH",
        "NoManifest",
        "FloatFast",
        "NoNativeWChar",
        "NoExceptions",
        "Symbols",
        "StaticRuntime"
    }

    configuration {"not vs2013"}
        flags {"EnableSSE2"}

    configuration {"not windows"}
        flags {"Unicode"}

    configuration {"*Debug*"}
        defines {"__orxDEBUG__"}
        links {"orxd"}

    configuration {"*Release*"}
        flags {"Optimize", "NoRTTI"}
        links {"orx"}


-- Linux

    -- This prevents an optimization bug from happening with some versions of gcc on linux
    configuration {"linux", "not *Debug*"}
        buildoptions {"-fschedule-insns"}


-- Mac OS X

    configuration {"macosx"}
        buildoptions
        {
            "-mmacosx-version-min=10.6",
            "-gdwarf-2",
            "-Wno-write-strings",
            "-Wno-invalid-offsetof",
            "-Wno-switch"
        }
        linkoptions
        {
            "-mmacosx-version-min=10.6",
            "-dead_strip"
        }

    configuration {"macosx", "x32"}
        buildoptions
        {
            "-mfix-and-continue"
        }


-- Windows


--
-- Project: BunnyMark
--

project "BunnyMark"

    files
    {
        "../src/**.c",
        "../src/**.cpp",
        "../include/**.h"
    }
    targetname ("bunny")


-- Linux

    configuration {"linux"}
        linkoptions {"-Wl,-rpath ./", "-Wl,--export-dynamic"}
        links
        {
            "dl",
            "m",
            "rt"
        }

    configuration {"linux", "x32"}
        libdirs {"../lib/linux/32"}
        targetdir ("../bin/linux/32")

    configuration {"linux", "x64"}
        libdirs {"../lib/linux/64"}
        targetdir ("../bin/linux/64")


-- Mac OS X

    configuration {"macosx"}
        links
        {
            "Foundation.framework",
            "AppKit.framework"
        }
        libdirs {"../lib/mac/universal"}
        targetdir ("../bin/mac/universal")


-- Windows

    configuration {"windows"}
        links
        {
            "winmm"
        }

    configuration {"windows", "x64"}
        libdirs {"../lib/windows/64"}
        targetdir ("../bin/windows/64")

    configuration {"windows", "not x64"}
        libdirs {"../lib/windows/32"}
        targetdir ("../bin/windows/32")

    configuration {"windows", "codeblocks or codelite or gmake"}
        libdirs {"../lib/windows/mingw"}
        targetdir ("../bin/windows/mingw")
