# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ssnover/develop/tools/clion/clion-2017.2.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ssnover/develop/tools/clion/clion-2017.2.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ssnover/develop/life-expectancy-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ssnover/develop/life-expectancy-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/life-expectancy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/life-expectancy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/life-expectancy.dir/flags.make

CMakeFiles/life-expectancy.dir/main.cpp.o: CMakeFiles/life-expectancy.dir/flags.make
CMakeFiles/life-expectancy.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ssnover/develop/life-expectancy-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/life-expectancy.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life-expectancy.dir/main.cpp.o -c /home/ssnover/develop/life-expectancy-cpp/main.cpp

CMakeFiles/life-expectancy.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life-expectancy.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ssnover/develop/life-expectancy-cpp/main.cpp > CMakeFiles/life-expectancy.dir/main.cpp.i

CMakeFiles/life-expectancy.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life-expectancy.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ssnover/develop/life-expectancy-cpp/main.cpp -o CMakeFiles/life-expectancy.dir/main.cpp.s

CMakeFiles/life-expectancy.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/life-expectancy.dir/main.cpp.o.requires

CMakeFiles/life-expectancy.dir/main.cpp.o.provides: CMakeFiles/life-expectancy.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/life-expectancy.dir/build.make CMakeFiles/life-expectancy.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/life-expectancy.dir/main.cpp.o.provides

CMakeFiles/life-expectancy.dir/main.cpp.o.provides.build: CMakeFiles/life-expectancy.dir/main.cpp.o


CMakeFiles/life-expectancy.dir/utils.cpp.o: CMakeFiles/life-expectancy.dir/flags.make
CMakeFiles/life-expectancy.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ssnover/develop/life-expectancy-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/life-expectancy.dir/utils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life-expectancy.dir/utils.cpp.o -c /home/ssnover/develop/life-expectancy-cpp/utils.cpp

CMakeFiles/life-expectancy.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life-expectancy.dir/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ssnover/develop/life-expectancy-cpp/utils.cpp > CMakeFiles/life-expectancy.dir/utils.cpp.i

CMakeFiles/life-expectancy.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life-expectancy.dir/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ssnover/develop/life-expectancy-cpp/utils.cpp -o CMakeFiles/life-expectancy.dir/utils.cpp.s

CMakeFiles/life-expectancy.dir/utils.cpp.o.requires:

.PHONY : CMakeFiles/life-expectancy.dir/utils.cpp.o.requires

CMakeFiles/life-expectancy.dir/utils.cpp.o.provides: CMakeFiles/life-expectancy.dir/utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/life-expectancy.dir/build.make CMakeFiles/life-expectancy.dir/utils.cpp.o.provides.build
.PHONY : CMakeFiles/life-expectancy.dir/utils.cpp.o.provides

CMakeFiles/life-expectancy.dir/utils.cpp.o.provides.build: CMakeFiles/life-expectancy.dir/utils.cpp.o


# Object files for target life-expectancy
life__expectancy_OBJECTS = \
"CMakeFiles/life-expectancy.dir/main.cpp.o" \
"CMakeFiles/life-expectancy.dir/utils.cpp.o"

# External object files for target life-expectancy
life__expectancy_EXTERNAL_OBJECTS =

life-expectancy: CMakeFiles/life-expectancy.dir/main.cpp.o
life-expectancy: CMakeFiles/life-expectancy.dir/utils.cpp.o
life-expectancy: CMakeFiles/life-expectancy.dir/build.make
life-expectancy: CMakeFiles/life-expectancy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ssnover/develop/life-expectancy-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable life-expectancy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/life-expectancy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/life-expectancy.dir/build: life-expectancy

.PHONY : CMakeFiles/life-expectancy.dir/build

CMakeFiles/life-expectancy.dir/requires: CMakeFiles/life-expectancy.dir/main.cpp.o.requires
CMakeFiles/life-expectancy.dir/requires: CMakeFiles/life-expectancy.dir/utils.cpp.o.requires

.PHONY : CMakeFiles/life-expectancy.dir/requires

CMakeFiles/life-expectancy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/life-expectancy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/life-expectancy.dir/clean

CMakeFiles/life-expectancy.dir/depend:
	cd /home/ssnover/develop/life-expectancy-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ssnover/develop/life-expectancy-cpp /home/ssnover/develop/life-expectancy-cpp /home/ssnover/develop/life-expectancy-cpp/cmake-build-debug /home/ssnover/develop/life-expectancy-cpp/cmake-build-debug /home/ssnover/develop/life-expectancy-cpp/cmake-build-debug/CMakeFiles/life-expectancy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/life-expectancy.dir/depend
