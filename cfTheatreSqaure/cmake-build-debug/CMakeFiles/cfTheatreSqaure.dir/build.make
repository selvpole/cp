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
CMAKE_SOURCE_DIR = /Users/rae/Project/cp/cfTheatreSqaure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cfTheatreSqaure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cfTheatreSqaure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cfTheatreSqaure.dir/flags.make

CMakeFiles/cfTheatreSqaure.dir/main.cpp.o: CMakeFiles/cfTheatreSqaure.dir/flags.make
CMakeFiles/cfTheatreSqaure.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cfTheatreSqaure.dir/main.cpp.o"
	/usr/local/bin/g++-7   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cfTheatreSqaure.dir/main.cpp.o -c /Users/rae/Project/cp/cfTheatreSqaure/main.cpp

CMakeFiles/cfTheatreSqaure.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cfTheatreSqaure.dir/main.cpp.i"
	/usr/local/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rae/Project/cp/cfTheatreSqaure/main.cpp > CMakeFiles/cfTheatreSqaure.dir/main.cpp.i

CMakeFiles/cfTheatreSqaure.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cfTheatreSqaure.dir/main.cpp.s"
	/usr/local/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rae/Project/cp/cfTheatreSqaure/main.cpp -o CMakeFiles/cfTheatreSqaure.dir/main.cpp.s

CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.requires

CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.provides: CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cfTheatreSqaure.dir/build.make CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.provides

CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.provides.build: CMakeFiles/cfTheatreSqaure.dir/main.cpp.o


# Object files for target cfTheatreSqaure
cfTheatreSqaure_OBJECTS = \
"CMakeFiles/cfTheatreSqaure.dir/main.cpp.o"

# External object files for target cfTheatreSqaure
cfTheatreSqaure_EXTERNAL_OBJECTS =

cfTheatreSqaure: CMakeFiles/cfTheatreSqaure.dir/main.cpp.o
cfTheatreSqaure: CMakeFiles/cfTheatreSqaure.dir/build.make
cfTheatreSqaure: CMakeFiles/cfTheatreSqaure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cfTheatreSqaure"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cfTheatreSqaure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cfTheatreSqaure.dir/build: cfTheatreSqaure

.PHONY : CMakeFiles/cfTheatreSqaure.dir/build

CMakeFiles/cfTheatreSqaure.dir/requires: CMakeFiles/cfTheatreSqaure.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cfTheatreSqaure.dir/requires

CMakeFiles/cfTheatreSqaure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cfTheatreSqaure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cfTheatreSqaure.dir/clean

CMakeFiles/cfTheatreSqaure.dir/depend:
	cd /Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rae/Project/cp/cfTheatreSqaure /Users/rae/Project/cp/cfTheatreSqaure /Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug /Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug /Users/rae/Project/cp/cfTheatreSqaure/cmake-build-debug/CMakeFiles/cfTheatreSqaure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cfTheatreSqaure.dir/depend
