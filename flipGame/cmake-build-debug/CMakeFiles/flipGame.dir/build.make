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
CMAKE_SOURCE_DIR = /Users/Angpy/CLionProjects/flipGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Angpy/CLionProjects/flipGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/flipGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/flipGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/flipGame.dir/flags.make

CMakeFiles/flipGame.dir/main.cpp.o: CMakeFiles/flipGame.dir/flags.make
CMakeFiles/flipGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Angpy/CLionProjects/flipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/flipGame.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flipGame.dir/main.cpp.o -c /Users/Angpy/CLionProjects/flipGame/main.cpp

CMakeFiles/flipGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flipGame.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Angpy/CLionProjects/flipGame/main.cpp > CMakeFiles/flipGame.dir/main.cpp.i

CMakeFiles/flipGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flipGame.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Angpy/CLionProjects/flipGame/main.cpp -o CMakeFiles/flipGame.dir/main.cpp.s

CMakeFiles/flipGame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/flipGame.dir/main.cpp.o.requires

CMakeFiles/flipGame.dir/main.cpp.o.provides: CMakeFiles/flipGame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/flipGame.dir/build.make CMakeFiles/flipGame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/flipGame.dir/main.cpp.o.provides

CMakeFiles/flipGame.dir/main.cpp.o.provides.build: CMakeFiles/flipGame.dir/main.cpp.o


# Object files for target flipGame
flipGame_OBJECTS = \
"CMakeFiles/flipGame.dir/main.cpp.o"

# External object files for target flipGame
flipGame_EXTERNAL_OBJECTS =

flipGame: CMakeFiles/flipGame.dir/main.cpp.o
flipGame: CMakeFiles/flipGame.dir/build.make
flipGame: CMakeFiles/flipGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Angpy/CLionProjects/flipGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable flipGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flipGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/flipGame.dir/build: flipGame

.PHONY : CMakeFiles/flipGame.dir/build

CMakeFiles/flipGame.dir/requires: CMakeFiles/flipGame.dir/main.cpp.o.requires

.PHONY : CMakeFiles/flipGame.dir/requires

CMakeFiles/flipGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/flipGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/flipGame.dir/clean

CMakeFiles/flipGame.dir/depend:
	cd /Users/Angpy/CLionProjects/flipGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Angpy/CLionProjects/flipGame /Users/Angpy/CLionProjects/flipGame /Users/Angpy/CLionProjects/flipGame/cmake-build-debug /Users/Angpy/CLionProjects/flipGame/cmake-build-debug /Users/Angpy/CLionProjects/flipGame/cmake-build-debug/CMakeFiles/flipGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/flipGame.dir/depend

