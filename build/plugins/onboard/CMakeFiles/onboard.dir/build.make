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

# Include any dependencies generated for this target.
include plugins/onboard/CMakeFiles/onboard.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.make

# Include the progress variables for this target.
include plugins/onboard/CMakeFiles/onboard.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/onboard/CMakeFiles/onboard.dir/flags.make

plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboard.qrc
plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp: plugins/onboard/CMakeFiles/onboard_autogen.dir/AutoRcc_onboard_EWIEGA46WW_Info.json
plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/icon/keyboard-symbolic-dark.svg
plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/icon/keyboard-symbolic.svg
plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp: /usr/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for onboard.qrc"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/cmake -E cmake_autorcc /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/CMakeFiles/onboard_autogen.dir/AutoRcc_onboard_EWIEGA46WW_Info.json 

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/flags.make
plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o: plugins/onboard/onboard_autogen/mocs_compilation.cpp
plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o -MF CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o -c /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/mocs_compilation.cpp

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.i"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/mocs_compilation.cpp > CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.i

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.s"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/mocs_compilation.cpp -o CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.s

plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/flags.make
plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/widgets/tipswidget.cpp
plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o -MF CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o.d -o CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o -c /home/norwagovmain/Documents/Desktop-Environment/dde-dock/widgets/tipswidget.cpp

plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.i"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norwagovmain/Documents/Desktop-Environment/dde-dock/widgets/tipswidget.cpp > CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.i

plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.s"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norwagovmain/Documents/Desktop-Environment/dde-dock/widgets/tipswidget.cpp -o CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.s

plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/flags.make
plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboarditem.cpp
plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o -MF CMakeFiles/onboard.dir/onboarditem.cpp.o.d -o CMakeFiles/onboard.dir/onboarditem.cpp.o -c /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboarditem.cpp

plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/onboard.dir/onboarditem.cpp.i"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboarditem.cpp > CMakeFiles/onboard.dir/onboarditem.cpp.i

plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/onboard.dir/onboarditem.cpp.s"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboarditem.cpp -o CMakeFiles/onboard.dir/onboarditem.cpp.s

plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/flags.make
plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboardplugin.cpp
plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o -MF CMakeFiles/onboard.dir/onboardplugin.cpp.o.d -o CMakeFiles/onboard.dir/onboardplugin.cpp.o -c /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboardplugin.cpp

plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/onboard.dir/onboardplugin.cpp.i"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboardplugin.cpp > CMakeFiles/onboard.dir/onboardplugin.cpp.i

plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/onboard.dir/onboardplugin.cpp.s"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard/onboardplugin.cpp -o CMakeFiles/onboard.dir/onboardplugin.cpp.s

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/flags.make
plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o: plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp
plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o: plugins/onboard/CMakeFiles/onboard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o -MF CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o.d -o CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o -c /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.i"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp > CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.i

plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.s"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp -o CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.s

# Object files for target onboard
onboard_OBJECTS = \
"CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o" \
"CMakeFiles/onboard.dir/onboarditem.cpp.o" \
"CMakeFiles/onboard.dir/onboardplugin.cpp.o" \
"CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o"

# External object files for target onboard
onboard_EXTERNAL_OBJECTS =

plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/mocs_compilation.cpp.o
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/__/__/widgets/tipswidget.cpp.o
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/onboarditem.cpp.o
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/onboardplugin.cpp.o
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp.o
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/build.make
plugins/libonboard.so: /usr/lib/libQt5Widgets.so.5.15.7
plugins/libonboard.so: /usr/lib/libQt5DBus.so.5.15.7
plugins/libonboard.so: /usr/lib/libQt5Gui.so.5.15.7
plugins/libonboard.so: /usr/lib/libQt5Core.so.5.15.7
plugins/libonboard.so: plugins/onboard/CMakeFiles/onboard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library ../libonboard.so"
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/onboard.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/onboard/CMakeFiles/onboard.dir/build: plugins/libonboard.so
.PHONY : plugins/onboard/CMakeFiles/onboard.dir/build

plugins/onboard/CMakeFiles/onboard.dir/clean:
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard && $(CMAKE_COMMAND) -P CMakeFiles/onboard.dir/cmake_clean.cmake
.PHONY : plugins/onboard/CMakeFiles/onboard.dir/clean

plugins/onboard/CMakeFiles/onboard.dir/depend: plugins/onboard/onboard_autogen/EWIEGA46WW/qrc_onboard.cpp
	cd /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/norwagovmain/Documents/Desktop-Environment/dde-dock /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/onboard /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard /home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/onboard/CMakeFiles/onboard.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/onboard/CMakeFiles/onboard.dir/depend

