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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/saper/Saper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/saper/Saper/build

# Include any dependencies generated for this target.
include CMakeFiles/saper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/saper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/saper.dir/flags.make

CMakeFiles/saper.dir/main.c.o: CMakeFiles/saper.dir/flags.make
CMakeFiles/saper.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/saper/Saper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/saper.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/saper.dir/main.c.o   -c /home/student/saper/Saper/main.c

CMakeFiles/saper.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/saper.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/student/saper/Saper/main.c > CMakeFiles/saper.dir/main.c.i

CMakeFiles/saper.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/saper.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/student/saper/Saper/main.c -o CMakeFiles/saper.dir/main.c.s

# Object files for target saper
saper_OBJECTS = \
"CMakeFiles/saper.dir/main.c.o"

# External object files for target saper
saper_EXTERNAL_OBJECTS =

saper: CMakeFiles/saper.dir/main.c.o
saper: CMakeFiles/saper.dir/build.make
saper: CMakeFiles/saper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/saper/Saper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable saper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/saper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/saper.dir/build: saper

.PHONY : CMakeFiles/saper.dir/build

CMakeFiles/saper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/saper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/saper.dir/clean

CMakeFiles/saper.dir/depend:
	cd /home/student/saper/Saper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/saper/Saper /home/student/saper/Saper /home/student/saper/Saper/build /home/student/saper/Saper/build /home/student/saper/Saper/build/CMakeFiles/saper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/saper.dir/depend

