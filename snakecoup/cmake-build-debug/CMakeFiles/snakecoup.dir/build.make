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
CMAKE_SOURCE_DIR = /Users/Angpy/CLionProjects/snakecoup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Angpy/CLionProjects/snakecoup/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snakecoup.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snakecoup.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snakecoup.dir/flags.make

CMakeFiles/snakecoup.dir/main.cpp.o: CMakeFiles/snakecoup.dir/flags.make
CMakeFiles/snakecoup.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Angpy/CLionProjects/snakecoup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snakecoup.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snakecoup.dir/main.cpp.o -c /Users/Angpy/CLionProjects/snakecoup/main.cpp

CMakeFiles/snakecoup.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakecoup.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Angpy/CLionProjects/snakecoup/main.cpp > CMakeFiles/snakecoup.dir/main.cpp.i

CMakeFiles/snakecoup.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakecoup.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Angpy/CLionProjects/snakecoup/main.cpp -o CMakeFiles/snakecoup.dir/main.cpp.s

CMakeFiles/snakecoup.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/snakecoup.dir/main.cpp.o.requires

CMakeFiles/snakecoup.dir/main.cpp.o.provides: CMakeFiles/snakecoup.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/snakecoup.dir/build.make CMakeFiles/snakecoup.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/snakecoup.dir/main.cpp.o.provides

CMakeFiles/snakecoup.dir/main.cpp.o.provides.build: CMakeFiles/snakecoup.dir/main.cpp.o


# Object files for target snakecoup
snakecoup_OBJECTS = \
"CMakeFiles/snakecoup.dir/main.cpp.o"

# External object files for target snakecoup
snakecoup_EXTERNAL_OBJECTS =

snakecoup: CMakeFiles/snakecoup.dir/main.cpp.o
snakecoup: CMakeFiles/snakecoup.dir/build.make
snakecoup: CMakeFiles/snakecoup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Angpy/CLionProjects/snakecoup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snakecoup"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snakecoup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snakecoup.dir/build: snakecoup

.PHONY : CMakeFiles/snakecoup.dir/build

CMakeFiles/snakecoup.dir/requires: CMakeFiles/snakecoup.dir/main.cpp.o.requires

.PHONY : CMakeFiles/snakecoup.dir/requires

CMakeFiles/snakecoup.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snakecoup.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snakecoup.dir/clean

CMakeFiles/snakecoup.dir/depend:
	cd /Users/Angpy/CLionProjects/snakecoup/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Angpy/CLionProjects/snakecoup /Users/Angpy/CLionProjects/snakecoup /Users/Angpy/CLionProjects/snakecoup/cmake-build-debug /Users/Angpy/CLionProjects/snakecoup/cmake-build-debug /Users/Angpy/CLionProjects/snakecoup/cmake-build-debug/CMakeFiles/snakecoup.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snakecoup.dir/depend
