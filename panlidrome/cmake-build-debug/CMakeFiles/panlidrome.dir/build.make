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
CMAKE_SOURCE_DIR = /Users/rae/Project/cp/panlidrome

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rae/Project/cp/panlidrome/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/panlidrome.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/panlidrome.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/panlidrome.dir/flags.make

CMakeFiles/panlidrome.dir/main.cpp.o: CMakeFiles/panlidrome.dir/flags.make
CMakeFiles/panlidrome.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rae/Project/cp/panlidrome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/panlidrome.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/panlidrome.dir/main.cpp.o -c /Users/rae/Project/cp/panlidrome/main.cpp

CMakeFiles/panlidrome.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/panlidrome.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rae/Project/cp/panlidrome/main.cpp > CMakeFiles/panlidrome.dir/main.cpp.i

CMakeFiles/panlidrome.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/panlidrome.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rae/Project/cp/panlidrome/main.cpp -o CMakeFiles/panlidrome.dir/main.cpp.s

CMakeFiles/panlidrome.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/panlidrome.dir/main.cpp.o.requires

CMakeFiles/panlidrome.dir/main.cpp.o.provides: CMakeFiles/panlidrome.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/panlidrome.dir/build.make CMakeFiles/panlidrome.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/panlidrome.dir/main.cpp.o.provides

CMakeFiles/panlidrome.dir/main.cpp.o.provides.build: CMakeFiles/panlidrome.dir/main.cpp.o


# Object files for target panlidrome
panlidrome_OBJECTS = \
"CMakeFiles/panlidrome.dir/main.cpp.o"

# External object files for target panlidrome
panlidrome_EXTERNAL_OBJECTS =

panlidrome: CMakeFiles/panlidrome.dir/main.cpp.o
panlidrome: CMakeFiles/panlidrome.dir/build.make
panlidrome: CMakeFiles/panlidrome.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rae/Project/cp/panlidrome/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable panlidrome"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/panlidrome.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/panlidrome.dir/build: panlidrome

.PHONY : CMakeFiles/panlidrome.dir/build

CMakeFiles/panlidrome.dir/requires: CMakeFiles/panlidrome.dir/main.cpp.o.requires

.PHONY : CMakeFiles/panlidrome.dir/requires

CMakeFiles/panlidrome.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/panlidrome.dir/cmake_clean.cmake
.PHONY : CMakeFiles/panlidrome.dir/clean

CMakeFiles/panlidrome.dir/depend:
	cd /Users/rae/Project/cp/panlidrome/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rae/Project/cp/panlidrome /Users/rae/Project/cp/panlidrome /Users/rae/Project/cp/panlidrome/cmake-build-debug /Users/rae/Project/cp/panlidrome/cmake-build-debug /Users/rae/Project/cp/panlidrome/cmake-build-debug/CMakeFiles/panlidrome.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/panlidrome.dir/depend
