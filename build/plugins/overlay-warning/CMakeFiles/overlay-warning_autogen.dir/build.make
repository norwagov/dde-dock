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

# Utility rule file for overlay-warning_autogen.

# Include any custom commands dependencies for this target.
include plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/progress.make

plugins/overlay-warning/CMakeFiles/overlay-warning_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target overlay-warning"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/overlay-warning && /usr/bin/cmake -E cmake_autogen /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/AutogenInfo.json ""

overlay-warning_autogen: plugins/overlay-warning/CMakeFiles/overlay-warning_autogen
overlay-warning_autogen: plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/build.make
.PHONY : overlay-warning_autogen

# Rule to build all files generated by this target.
plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/build: overlay-warning_autogen
.PHONY : plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/build

plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/clean:
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/overlay-warning && $(CMAKE_COMMAND) -P CMakeFiles/overlay-warning_autogen.dir/cmake_clean.cmake
.PHONY : plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/clean

plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/depend:
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/norwagovmain/Documents/Desktop-Environment/dde-dock /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/overlay-warning /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/overlay-warning /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/overlay-warning/CMakeFiles/overlay-warning_autogen.dir/depend

