# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jiangtao/github/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default

# Include any dependencies generated for this target.
include CMakeFiles/LeetCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LeetCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeetCode.dir/flags.make

CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o: CMakeFiles/LeetCode.dir/flags.make
CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o: ../../src/two-sum/solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o -c /Users/jiangtao/github/LeetCode/src/two-sum/solution.cpp

CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiangtao/github/LeetCode/src/two-sum/solution.cpp > CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.i

CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiangtao/github/LeetCode/src/two-sum/solution.cpp -o CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.s

# Object files for target LeetCode
LeetCode_OBJECTS = \
"CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o"

# External object files for target LeetCode
LeetCode_EXTERNAL_OBJECTS =

../../bin/LeetCode: CMakeFiles/LeetCode.dir/src/two-sum/solution.cpp.o
../../bin/LeetCode: CMakeFiles/LeetCode.dir/build.make
../../bin/LeetCode: CMakeFiles/LeetCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/LeetCode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeetCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeetCode.dir/build: ../../bin/LeetCode

.PHONY : CMakeFiles/LeetCode.dir/build

CMakeFiles/LeetCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LeetCode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LeetCode.dir/clean

CMakeFiles/LeetCode.dir/depend:
	cd /Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiangtao/github/LeetCode /Users/jiangtao/github/LeetCode /Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default /Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default /Users/jiangtao/github/LeetCode/output/build-LeetCode-unknown-Default/CMakeFiles/LeetCode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LeetCode.dir/depend
