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
CMAKE_SOURCE_DIR = /Users/nara007/ClionProjects/singelton

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nara007/ClionProjects/singelton/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/singelton.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/singelton.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/singelton.dir/flags.make

CMakeFiles/singelton.dir/main.cpp.o: CMakeFiles/singelton.dir/flags.make
CMakeFiles/singelton.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nara007/ClionProjects/singelton/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/singelton.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/singelton.dir/main.cpp.o -c /Users/nara007/ClionProjects/singelton/main.cpp

CMakeFiles/singelton.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/singelton.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nara007/ClionProjects/singelton/main.cpp > CMakeFiles/singelton.dir/main.cpp.i

CMakeFiles/singelton.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/singelton.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nara007/ClionProjects/singelton/main.cpp -o CMakeFiles/singelton.dir/main.cpp.s

CMakeFiles/singelton.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/singelton.dir/main.cpp.o.requires

CMakeFiles/singelton.dir/main.cpp.o.provides: CMakeFiles/singelton.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/singelton.dir/build.make CMakeFiles/singelton.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/singelton.dir/main.cpp.o.provides

CMakeFiles/singelton.dir/main.cpp.o.provides.build: CMakeFiles/singelton.dir/main.cpp.o


# Object files for target singelton
singelton_OBJECTS = \
"CMakeFiles/singelton.dir/main.cpp.o"

# External object files for target singelton
singelton_EXTERNAL_OBJECTS =

singelton: CMakeFiles/singelton.dir/main.cpp.o
singelton: CMakeFiles/singelton.dir/build.make
singelton: CMakeFiles/singelton.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nara007/ClionProjects/singelton/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable singelton"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/singelton.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/singelton.dir/build: singelton

.PHONY : CMakeFiles/singelton.dir/build

CMakeFiles/singelton.dir/requires: CMakeFiles/singelton.dir/main.cpp.o.requires

.PHONY : CMakeFiles/singelton.dir/requires

CMakeFiles/singelton.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/singelton.dir/cmake_clean.cmake
.PHONY : CMakeFiles/singelton.dir/clean

CMakeFiles/singelton.dir/depend:
	cd /Users/nara007/ClionProjects/singelton/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nara007/ClionProjects/singelton /Users/nara007/ClionProjects/singelton /Users/nara007/ClionProjects/singelton/cmake-build-debug /Users/nara007/ClionProjects/singelton/cmake-build-debug /Users/nara007/ClionProjects/singelton/cmake-build-debug/CMakeFiles/singelton.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/singelton.dir/depend

