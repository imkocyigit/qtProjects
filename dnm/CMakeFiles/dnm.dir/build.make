# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/mete/qtprojects/dnm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mete/qtprojects/dnm

# Include any dependencies generated for this target.
include CMakeFiles/dnm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dnm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dnm.dir/flags.make

CMakeFiles/dnm.dir/main.cpp.o: CMakeFiles/dnm.dir/flags.make
CMakeFiles/dnm.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mete/qtprojects/dnm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dnm.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dnm.dir/main.cpp.o -c /home/mete/qtprojects/dnm/main.cpp

CMakeFiles/dnm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dnm.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mete/qtprojects/dnm/main.cpp > CMakeFiles/dnm.dir/main.cpp.i

CMakeFiles/dnm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dnm.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mete/qtprojects/dnm/main.cpp -o CMakeFiles/dnm.dir/main.cpp.s

CMakeFiles/dnm.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/dnm.dir/main.cpp.o.requires

CMakeFiles/dnm.dir/main.cpp.o.provides: CMakeFiles/dnm.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/dnm.dir/build.make CMakeFiles/dnm.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/dnm.dir/main.cpp.o.provides

CMakeFiles/dnm.dir/main.cpp.o.provides.build: CMakeFiles/dnm.dir/main.cpp.o


# Object files for target dnm
dnm_OBJECTS = \
"CMakeFiles/dnm.dir/main.cpp.o"

# External object files for target dnm
dnm_EXTERNAL_OBJECTS =

dnm: CMakeFiles/dnm.dir/main.cpp.o
dnm: CMakeFiles/dnm.dir/build.make
dnm: CMakeFiles/dnm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mete/qtprojects/dnm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dnm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dnm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dnm.dir/build: dnm

.PHONY : CMakeFiles/dnm.dir/build

CMakeFiles/dnm.dir/requires: CMakeFiles/dnm.dir/main.cpp.o.requires

.PHONY : CMakeFiles/dnm.dir/requires

CMakeFiles/dnm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dnm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dnm.dir/clean

CMakeFiles/dnm.dir/depend:
	cd /home/mete/qtprojects/dnm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mete/qtprojects/dnm /home/mete/qtprojects/dnm /home/mete/qtprojects/dnm /home/mete/qtprojects/dnm /home/mete/qtprojects/dnm/CMakeFiles/dnm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dnm.dir/depend

