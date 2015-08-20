#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_MainWindows
#include <MainWindows.h>
#endif
#ifndef INCLUDED_haxor_component_Behaviour
#include <haxor/component/Behaviour.h>
#endif
#ifndef INCLUDED_haxor_component_Component
#include <haxor/component/Component.h>
#endif
#ifndef INCLUDED_haxor_core_Application
#include <haxor/core/Application.h>
#endif
#ifndef INCLUDED_haxor_core_BaseApplication
#include <haxor/core/BaseApplication.h>
#endif
#ifndef INCLUDED_haxor_core_IDisposable
#include <haxor/core/IDisposable.h>
#endif
#ifndef INCLUDED_haxor_core_IRenderable
#include <haxor/core/IRenderable.h>
#endif
#ifndef INCLUDED_haxor_core_Resource
#include <haxor/core/Resource.h>
#endif
#ifndef INCLUDED_haxor_platform_windows_WinApplication
#include <haxor/platform/windows/WinApplication.h>
#endif



#include <hx/HxcppMain.h>

void __hxcpp_main() {
::MainWindows_obj::main();
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
