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
CMAKE_SOURCE_DIR = /Users/rae/Project/cp/cf337A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rae/Project/cp/cf337A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cf337A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cf337A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cf337A.dir/flags.make

CMakeFiles/cf337A.dir/main.cpp.o: CMakeFiles/cf337A.dir/flags.make
CMakeFiles/cf337A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rae/Project/cp/cf337A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cf337A.dir/main.cpp.o"
	/usr/local/bin/g++-7   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cf337A.dir/main.cpp.o -c /Users/rae/Project/cp/cf337A/main.cpp

CMakeFiles/cf337A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cf337A.dir/main.cpp.i"
	/usr/local/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rae/Project/cp/cf337A/main.cpp > CMakeFiles/cf337A.dir/main.cpp.i

CMakeFiles/cf337A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cf337A.dir/main.cpp.s"
	/usr/local/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rae/Project/cp/cf337A/main.cpp -o CMakeFiles/cf337A.dir/main.cpp.s

CMakeFiles/cf337A.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cf337A.dir/main.cpp.o.requires

CMakeFiles/cf337A.dir/main.cpp.o.provides: CMakeFiles/cf337A.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cf337A.dir/build.make CMakeFiles/cf337A.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cf337A.dir/main.cpp.o.provides

CMakeFiles/cf337A.dir/main.cpp.o.provides.build: CMakeFiles/cf337A.dir/main.cpp.o


# Object files for target cf337A
cf337A_OBJECTS = \
"CMakeFiles/cf337A.dir/main.cpp.o"

# External object files for target cf337A
cf337A_EXTERNAL_OBJECTS =

cf337A: CMakeFiles/cf337A.dir/main.cpp.o
cf337A: CMakeFiles/cf337A.dir/build.make
cf337A: CMakeFiles/cf337A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rae/Project/cp/cf337A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cf337A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cf337A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cf337A.dir/build: cf337A

.PHONY : CMakeFiles/cf337A.dir/build

CMakeFiles/cf337A.dir/requires: CMakeFiles/cf337A.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cf337A.dir/requires

CMakeFiles/cf337A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cf337A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cf337A.dir/clean

CMakeFiles/cf337A.dir/depend:
	cd /Users/rae/Project/cp/cf337A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rae/Project/cp/cf337A /Users/rae/Project/cp/cf337A /Users/rae/Project/cp/cf337A/cmake-build-debug /Users/rae/Project/cp/cf337A/cmake-build-debug /Users/rae/Project/cp/cf337A/cmake-build-debug/CMakeFiles/cf337A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cf337A.dir/depend

