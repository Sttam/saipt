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
CMAKE_SOURCE_DIR = /media/sf_share/saipt/ch20

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/sf_share/saipt/ch20/build

# Include any dependencies generated for this target.
include CMakeFiles/s20_0202.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/s20_0202.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/s20_0202.dir/flags.make

CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o: CMakeFiles/s20_0202.dir/flags.make
CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o: ../src/s20_0202.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/sf_share/saipt/ch20/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o -c /media/sf_share/saipt/ch20/src/s20_0202.cpp

CMakeFiles/s20_0202.dir/src/s20_0202.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/s20_0202.dir/src/s20_0202.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/sf_share/saipt/ch20/src/s20_0202.cpp > CMakeFiles/s20_0202.dir/src/s20_0202.cpp.i

CMakeFiles/s20_0202.dir/src/s20_0202.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/s20_0202.dir/src/s20_0202.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/sf_share/saipt/ch20/src/s20_0202.cpp -o CMakeFiles/s20_0202.dir/src/s20_0202.cpp.s

# Object files for target s20_0202
s20_0202_OBJECTS = \
"CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o"

# External object files for target s20_0202
s20_0202_EXTERNAL_OBJECTS =

s20_0202: CMakeFiles/s20_0202.dir/src/s20_0202.cpp.o
s20_0202: CMakeFiles/s20_0202.dir/build.make
s20_0202: CMakeFiles/s20_0202.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/sf_share/saipt/ch20/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable s20_0202"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/s20_0202.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/s20_0202.dir/build: s20_0202

.PHONY : CMakeFiles/s20_0202.dir/build

CMakeFiles/s20_0202.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/s20_0202.dir/cmake_clean.cmake
.PHONY : CMakeFiles/s20_0202.dir/clean

CMakeFiles/s20_0202.dir/depend:
	cd /media/sf_share/saipt/ch20/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/sf_share/saipt/ch20 /media/sf_share/saipt/ch20 /media/sf_share/saipt/ch20/build /media/sf_share/saipt/ch20/build /media/sf_share/saipt/ch20/build/CMakeFiles/s20_0202.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/s20_0202.dir/depend

