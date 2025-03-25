-- premake5.lua
workspace "beatrice_v"
  configurations { "Debug", "Release" }

project "beatrice_v"
	kind "ConsoleApp"
	language "C++"
	targetdir "bin/%{cfg.buildcfg}"

	files { "src/**.h", "src/**.hpp", "src/**.cpp" }
