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
CMAKE_SOURCE_DIR = /home/alexander/Dokumente/WS2020/AdvancedC++/ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build

# Include any dependencies generated for this target.
include CMakeFiles/test_distribution.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_distribution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_distribution.dir/flags.make

CMakeFiles/test_distribution.dir/test_distribution.cpp.o: CMakeFiles/test_distribution.dir/flags.make
CMakeFiles/test_distribution.dir/test_distribution.cpp.o: ../test_distribution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_distribution.dir/test_distribution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_distribution.dir/test_distribution.cpp.o -c /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/test_distribution.cpp

CMakeFiles/test_distribution.dir/test_distribution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_distribution.dir/test_distribution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/test_distribution.cpp > CMakeFiles/test_distribution.dir/test_distribution.cpp.i

CMakeFiles/test_distribution.dir/test_distribution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_distribution.dir/test_distribution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/test_distribution.cpp -o CMakeFiles/test_distribution.dir/test_distribution.cpp.s

# Object files for target test_distribution
test_distribution_OBJECTS = \
"CMakeFiles/test_distribution.dir/test_distribution.cpp.o"

# External object files for target test_distribution
test_distribution_EXTERNAL_OBJECTS =

test_distribution: CMakeFiles/test_distribution.dir/test_distribution.cpp.o
test_distribution: CMakeFiles/test_distribution.dir/build.make
test_distribution: CMakeFiles/test_distribution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_distribution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_distribution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_distribution.dir/build: test_distribution

.PHONY : CMakeFiles/test_distribution.dir/build

CMakeFiles/test_distribution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_distribution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_distribution.dir/clean

CMakeFiles/test_distribution.dir/depend:
	cd /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexander/Dokumente/WS2020/AdvancedC++/ex2 /home/alexander/Dokumente/WS2020/AdvancedC++/ex2 /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build /home/alexander/Dokumente/WS2020/AdvancedC++/ex2/build/CMakeFiles/test_distribution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_distribution.dir/depend

