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
CMAKE_SOURCE_DIR = /Users/Angpy/CLionProjects/mergeKsortedArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mergeKsortedArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mergeKsortedArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mergeKsortedArray.dir/flags.make

CMakeFiles/mergeKsortedArray.dir/main.cpp.o: CMakeFiles/mergeKsortedArray.dir/flags.make
CMakeFiles/mergeKsortedArray.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mergeKsortedArray.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mergeKsortedArray.dir/main.cpp.o -c /Users/Angpy/CLionProjects/mergeKsortedArray/main.cpp

CMakeFiles/mergeKsortedArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mergeKsortedArray.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Angpy/CLionProjects/mergeKsortedArray/main.cpp > CMakeFiles/mergeKsortedArray.dir/main.cpp.i

CMakeFiles/mergeKsortedArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mergeKsortedArray.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Angpy/CLionProjects/mergeKsortedArray/main.cpp -o CMakeFiles/mergeKsortedArray.dir/main.cpp.s

CMakeFiles/mergeKsortedArray.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/mergeKsortedArray.dir/main.cpp.o.requires

CMakeFiles/mergeKsortedArray.dir/main.cpp.o.provides: CMakeFiles/mergeKsortedArray.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/mergeKsortedArray.dir/build.make CMakeFiles/mergeKsortedArray.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/mergeKsortedArray.dir/main.cpp.o.provides

CMakeFiles/mergeKsortedArray.dir/main.cpp.o.provides.build: CMakeFiles/mergeKsortedArray.dir/main.cpp.o


# Object files for target mergeKsortedArray
mergeKsortedArray_OBJECTS = \
"CMakeFiles/mergeKsortedArray.dir/main.cpp.o"

# External object files for target mergeKsortedArray
mergeKsortedArray_EXTERNAL_OBJECTS =

mergeKsortedArray: CMakeFiles/mergeKsortedArray.dir/main.cpp.o
mergeKsortedArray: CMakeFiles/mergeKsortedArray.dir/build.make
mergeKsortedArray: CMakeFiles/mergeKsortedArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mergeKsortedArray"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mergeKsortedArray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mergeKsortedArray.dir/build: mergeKsortedArray

.PHONY : CMakeFiles/mergeKsortedArray.dir/build

CMakeFiles/mergeKsortedArray.dir/requires: CMakeFiles/mergeKsortedArray.dir/main.cpp.o.requires

.PHONY : CMakeFiles/mergeKsortedArray.dir/requires

CMakeFiles/mergeKsortedArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mergeKsortedArray.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mergeKsortedArray.dir/clean

CMakeFiles/mergeKsortedArray.dir/depend:
	cd /Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Angpy/CLionProjects/mergeKsortedArray /Users/Angpy/CLionProjects/mergeKsortedArray /Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug /Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug /Users/Angpy/CLionProjects/mergeKsortedArray/cmake-build-debug/CMakeFiles/mergeKsortedArray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mergeKsortedArray.dir/depend
