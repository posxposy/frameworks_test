# Bunnymark_all

#Instructions

1. Close ALL OTHER applications and windows first.
2. Disable all but one monitor/display.
3. Set your monitor's display resolution to 1920x1080p if possible, otherwise note the digression in your report
4. Measure The maximum # of bunnies you can achieve while maintaining 60 FPS.
5. Write your report like this:

```json
{
  "user":"larsiusprime",
  "target":"windows",
  "mode":"release",
  "bunnies":50000,
  "systemdata":
  {
    "os":"Windows 7 SP1",
    "ram":"8387064 KB (8 GB)",
    "cpu":"Intel(R) Core(TM)2 Duo CPU     E7400  @ 2.80GHz",
    "gpu":"ATI Radeon HD 4800 Series, driver v. 8.970.100.1100"
  },
  "active_displays":1,
  "resolution":[1920,1080],
  "no_other_programs_running":true
}
```

Then add that entry as a PR to the appropriate json file in the _results/ folder.

NOTE: we'll probably add useful fields based on the framework. For OpenFL it's
important to distinguish between -Dlegacy and -Dnext for instance, for web-based
targets its important to note which browser you are using, and so forth.


Performance benchmark of the game frameworks
http://themozokteam.com/playground/frameworkstest/


