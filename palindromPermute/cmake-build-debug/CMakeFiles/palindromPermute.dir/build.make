# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Angpy/CLionProjects/palindromPermute

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/palindromPermute.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/palindromPermute.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/palindromPermute.dir/flags.make

CMakeFiles/palindromPermute.dir/main.cpp.o: CMakeFiles/palindromPermute.dir/flags.make
CMakeFiles/palindromPermute.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/palindromPermute.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/palindromPermute.dir/main.cpp.o -c /Users/Angpy/CLionProjects/palindromPermute/main.cpp

CMakeFiles/palindromPermute.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/palindromPermute.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Angpy/CLionProjects/palindromPermute/main.cpp > CMakeFiles/palindromPermute.dir/main.cpp.i

CMakeFiles/palindromPermute.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/palindromPermute.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Angpy/CLionProjects/palindromPermute/main.cpp -o CMakeFiles/palindromPermute.dir/main.cpp.s

CMakeFiles/palindromPermute.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/palindromPermute.dir/main.cpp.o.requires

CMakeFiles/palindromPermute.dir/main.cpp.o.provides: CMakeFiles/palindromPermute.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/palindromPermute.dir/build.make CMakeFiles/palindromPermute.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/palindromPermute.dir/main.cpp.o.provides

CMakeFiles/palindromPermute.dir/main.cpp.o.provides.build: CMakeFiles/palindromPermute.dir/main.cpp.o


# Object files for target palindromPermute
palindromPermute_OBJECTS = \
"CMakeFiles/palindromPermute.dir/main.cpp.o"

# External object files for target palindromPermute
palindromPermute_EXTERNAL_OBJECTS =

palindromPermute: CMakeFiles/palindromPermute.dir/main.cpp.o
palindromPermute: CMakeFiles/palindromPermute.dir/build.make
palindromPermute: CMakeFiles/palindromPermute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable palindromPermute"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palindromPermute.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/palindromPermute.dir/build: palindromPermute

.PHONY : CMakeFiles/palindromPermute.dir/build

CMakeFiles/palindromPermute.dir/requires: CMakeFiles/palindromPermute.dir/main.cpp.o.requires

.PHONY : CMakeFiles/palindromPermute.dir/requires

CMakeFiles/palindromPermute.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/palindromPermute.dir/cmake_clean.cmake
.PHONY : CMakeFiles/palindromPermute.dir/clean

CMakeFiles/palindromPermute.dir/depend:
	cd /Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Angpy/CLionProjects/palindromPermute /Users/Angpy/CLionProjects/palindromPermute /Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug /Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug /Users/Angpy/CLionProjects/palindromPermute/cmake-build-debug/CMakeFiles/palindromPermute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/palindromPermute.dir/depend
