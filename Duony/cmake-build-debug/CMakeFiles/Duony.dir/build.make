# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Public\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Public\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Public\CLionProjects\Duony

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Public\CLionProjects\Duony\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Duony.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Duony.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Duony.dir/flags.make

CMakeFiles/Duony.dir/main.cpp.obj: CMakeFiles/Duony.dir/flags.make
CMakeFiles/Duony.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Public\CLionProjects\Duony\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Duony.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Duony.dir\main.cpp.obj -c C:\Users\Public\CLionProjects\Duony\main.cpp

CMakeFiles/Duony.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Duony.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Public\CLionProjects\Duony\main.cpp > CMakeFiles\Duony.dir\main.cpp.i

CMakeFiles/Duony.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Duony.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Public\CLionProjects\Duony\main.cpp -o CMakeFiles\Duony.dir\main.cpp.s

# Object files for target Duony
Duony_OBJECTS = \
"CMakeFiles/Duony.dir/main.cpp.obj"

# External object files for target Duony
Duony_EXTERNAL_OBJECTS =

Duony.exe: CMakeFiles/Duony.dir/main.cpp.obj
Duony.exe: CMakeFiles/Duony.dir/build.make
Duony.exe: CMakeFiles/Duony.dir/linklibs.rsp
Duony.exe: CMakeFiles/Duony.dir/objects1.rsp
Duony.exe: CMakeFiles/Duony.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Public\CLionProjects\Duony\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Duony.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Duony.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Duony.dir/build: Duony.exe

.PHONY : CMakeFiles/Duony.dir/build

CMakeFiles/Duony.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Duony.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Duony.dir/clean

CMakeFiles/Duony.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Public\CLionProjects\Duony C:\Users\Public\CLionProjects\Duony C:\Users\Public\CLionProjects\Duony\cmake-build-debug C:\Users\Public\CLionProjects\Duony\cmake-build-debug C:\Users\Public\CLionProjects\Duony\cmake-build-debug\CMakeFiles\Duony.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Duony.dir/depend
