# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/norwagovmain/Documents/Desktop-Environment/dde-dock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build

# Utility rule file for dde-dock_autogen.

# Include any custom commands dependencies for this target.
include frame/CMakeFiles/dde-dock_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include frame/CMakeFiles/dde-dock_autogen.dir/progress.make

frame/CMakeFiles/dde-dock_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target dde-dock"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame && /usr/bin/cmake -E cmake_autogen /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame/CMakeFiles/dde-dock_autogen.dir/AutogenInfo.json ""

dde-dock_autogen: frame/CMakeFiles/dde-dock_autogen
dde-dock_autogen: frame/CMakeFiles/dde-dock_autogen.dir/build.make
.PHONY : dde-dock_autogen

# Rule to build all files generated by this target.
frame/CMakeFiles/dde-dock_autogen.dir/build: dde-dock_autogen
.PHONY : frame/CMakeFiles/dde-dock_autogen.dir/build

frame/CMakeFiles/dde-dock_autogen.dir/clean:
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame && $(CMAKE_COMMAND) -P CMakeFiles/dde-dock_autogen.dir/cmake_clean.cmake
.PHONY : frame/CMakeFiles/dde-dock_autogen.dir/clean

frame/CMakeFiles/dde-dock_autogen.dir/depend:
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/norwagovmain/Documents/Desktop-Environment/dde-dock /home/norwagovmain/Documents/Desktop-Environment/dde-dock/frame /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame/CMakeFiles/dde-dock_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : frame/CMakeFiles/dde-dock_autogen.dir/depend

