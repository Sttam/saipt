# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/sf_share/saipt/ch16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_share/saipt/ch16/build

# Include any dependencies generated for this target.
include CMakeFiles/s16_0102.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/s16_0102.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/s16_0102.dir/flags.make

CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o: CMakeFiles/s16_0102.dir/flags.make
CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o: ../src/s16_0102.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_share/saipt/ch16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o -c /media/sf_share/saipt/ch16/src/s16_0102.cpp

CMakeFiles/s16_0102.dir/src/s16_0102.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s16_0102.dir/src/s16_0102.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_share/saipt/ch16/src/s16_0102.cpp > CMakeFiles/s16_0102.dir/src/s16_0102.cpp.i

CMakeFiles/s16_0102.dir/src/s16_0102.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s16_0102.dir/src/s16_0102.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_share/saipt/ch16/src/s16_0102.cpp -o CMakeFiles/s16_0102.dir/src/s16_0102.cpp.s

# Object files for target s16_0102
s16_0102_OBJECTS = \
"CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o"

# External object files for target s16_0102
s16_0102_EXTERNAL_OBJECTS =

s16_0102: CMakeFiles/s16_0102.dir/src/s16_0102.cpp.o
s16_0102: CMakeFiles/s16_0102.dir/build.make
s16_0102: CMakeFiles/s16_0102.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_share/saipt/ch16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable s16_0102"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/s16_0102.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/s16_0102.dir/build: s16_0102

.PHONY : CMakeFiles/s16_0102.dir/build

CMakeFiles/s16_0102.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/s16_0102.dir/cmake_clean.cmake
.PHONY : CMakeFiles/s16_0102.dir/clean

CMakeFiles/s16_0102.dir/depend:
	cd /media/sf_share/saipt/ch16/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_share/saipt/ch16 /media/sf_share/saipt/ch16 /media/sf_share/saipt/ch16/build /media/sf_share/saipt/ch16/build /media/sf_share/saipt/ch16/build/CMakeFiles/s16_0102.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/s16_0102.dir/depend

