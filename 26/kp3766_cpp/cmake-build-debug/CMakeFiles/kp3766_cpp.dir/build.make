# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\brain\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\brain\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\studying-notes\ege\info\26\kp3766_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\kp3766_cpp.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\kp3766_cpp.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\kp3766_cpp.dir\flags.make

CMakeFiles\kp3766_cpp.dir\main.cpp.obj: CMakeFiles\kp3766_cpp.dir\flags.make
CMakeFiles\kp3766_cpp.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kp3766_cpp.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\kp3766_cpp.dir\main.cpp.obj /FdCMakeFiles\kp3766_cpp.dir\ /FS -c F:\studying-notes\ege\info\26\kp3766_cpp\main.cpp
<<

CMakeFiles\kp3766_cpp.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kp3766_cpp.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx64\x64\cl.exe > CMakeFiles\kp3766_cpp.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\studying-notes\ege\info\26\kp3766_cpp\main.cpp
<<

CMakeFiles\kp3766_cpp.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kp3766_cpp.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\kp3766_cpp.dir\main.cpp.s /c F:\studying-notes\ege\info\26\kp3766_cpp\main.cpp
<<

# Object files for target kp3766_cpp
kp3766_cpp_OBJECTS = \
"CMakeFiles\kp3766_cpp.dir\main.cpp.obj"

# External object files for target kp3766_cpp
kp3766_cpp_EXTERNAL_OBJECTS =

kp3766_cpp.exe: CMakeFiles\kp3766_cpp.dir\main.cpp.obj
kp3766_cpp.exe: CMakeFiles\kp3766_cpp.dir\build.make
kp3766_cpp.exe: CMakeFiles\kp3766_cpp.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kp3766_cpp.exe"
	C:\Users\brain\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7142.21\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\kp3766_cpp.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\kp3766_cpp.dir\objects1.rsp @<<
 /out:kp3766_cpp.exe /implib:kp3766_cpp.lib /pdb:F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug\kp3766_cpp.pdb /version:0.0 /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\kp3766_cpp.dir\build: kp3766_cpp.exe

.PHONY : CMakeFiles\kp3766_cpp.dir\build

CMakeFiles\kp3766_cpp.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kp3766_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles\kp3766_cpp.dir\clean

CMakeFiles\kp3766_cpp.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\studying-notes\ege\info\26\kp3766_cpp F:\studying-notes\ege\info\26\kp3766_cpp F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug F:\studying-notes\ege\info\26\kp3766_cpp\cmake-build-debug\CMakeFiles\kp3766_cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\kp3766_cpp.dir\depend

