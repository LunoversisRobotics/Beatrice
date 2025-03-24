-- premake5.lua
workspace "beatrice_v"
  configurations { "Debug", "Release" }
  location "bin"

project "beatrice_v"
	kind "ConsoleApp"
	language "C++"
	architecture "x86"
	location "build/ProjSetup"
	targetdir "bin/%{cfg.buildcfg}"

	files { "src/**.h", "src/**.hpp", "src/**.cpp" }