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
CMAKE_SOURCE_DIR = /Users/rae/Project/cp/uva10443

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rae/Project/cp/uva10443/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/uva10443.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uva10443.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uva10443.dir/flags.make

CMakeFiles/uva10443.dir/main.cpp.o: CMakeFiles/uva10443.dir/flags.make
CMakeFiles/uva10443.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rae/Project/cp/uva10443/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uva10443.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uva10443.dir/main.cpp.o -c /Users/rae/Project/cp/uva10443/main.cpp

CMakeFiles/uva10443.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uva10443.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rae/Project/cp/uva10443/main.cpp > CMakeFiles/uva10443.dir/main.cpp.i

CMakeFiles/uva10443.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uva10443.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rae/Project/cp/uva10443/main.cpp -o CMakeFiles/uva10443.dir/main.cpp.s

CMakeFiles/uva10443.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/uva10443.dir/main.cpp.o.requires

CMakeFiles/uva10443.dir/main.cpp.o.provides: CMakeFiles/uva10443.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/uva10443.dir/build.make CMakeFiles/uva10443.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/uva10443.dir/main.cpp.o.provides

CMakeFiles/uva10443.dir/main.cpp.o.provides.build: CMakeFiles/uva10443.dir/main.cpp.o


# Object files for target uva10443
uva10443_OBJECTS = \
"CMakeFiles/uva10443.dir/main.cpp.o"

# External object files for target uva10443
uva10443_EXTERNAL_OBJECTS =

uva10443: CMakeFiles/uva10443.dir/main.cpp.o
uva10443: CMakeFiles/uva10443.dir/build.make
uva10443: CMakeFiles/uva10443.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rae/Project/cp/uva10443/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable uva10443"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uva10443.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uva10443.dir/build: uva10443

.PHONY : CMakeFiles/uva10443.dir/build

CMakeFiles/uva10443.dir/requires: CMakeFiles/uva10443.dir/main.cpp.o.requires

.PHONY : CMakeFiles/uva10443.dir/requires

CMakeFiles/uva10443.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uva10443.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uva10443.dir/clean

CMakeFiles/uva10443.dir/depend:
	cd /Users/rae/Project/cp/uva10443/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rae/Project/cp/uva10443 /Users/rae/Project/cp/uva10443 /Users/rae/Project/cp/uva10443/cmake-build-debug /Users/rae/Project/cp/uva10443/cmake-build-debug /Users/rae/Project/cp/uva10443/cmake-build-debug/CMakeFiles/uva10443.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uva10443.dir/depend

