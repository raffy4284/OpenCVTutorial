# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.4.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.4.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/raffy4284/Desktop/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/raffy4284/Desktop/test

# Include any dependencies generated for this target.
include CMakeFiles/CircleDetector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CircleDetector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CircleDetector.dir/flags.make

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o: CMakeFiles/CircleDetector.dir/flags.make
CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o: CircleDetector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/raffy4284/Desktop/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o -c /Users/raffy4284/Desktop/test/CircleDetector.cpp

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircleDetector.dir/CircleDetector.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/raffy4284/Desktop/test/CircleDetector.cpp > CMakeFiles/CircleDetector.dir/CircleDetector.cpp.i

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircleDetector.dir/CircleDetector.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/raffy4284/Desktop/test/CircleDetector.cpp -o CMakeFiles/CircleDetector.dir/CircleDetector.cpp.s

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.requires:

.PHONY : CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.requires

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.provides: CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.requires
	$(MAKE) -f CMakeFiles/CircleDetector.dir/build.make CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.provides.build
.PHONY : CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.provides

CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.provides.build: CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o


# Object files for target CircleDetector
CircleDetector_OBJECTS = \
"CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o"

# External object files for target CircleDetector
CircleDetector_EXTERNAL_OBJECTS =

CircleDetector: CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o
CircleDetector: CMakeFiles/CircleDetector.dir/build.make
CircleDetector: /usr/local/lib/libopencv_xphoto.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_ximgproc.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_tracking.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_surface_matching.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_saliency.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_rgbd.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_reg.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_optflow.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_line_descriptor.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_latentsvm.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_datasets.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_ccalib.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_bioinspired.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_bgsegm.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_adas.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_videostab.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_superres.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_stitching.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_photo.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_objdetect.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_hal.a
CircleDetector: /usr/local/lib/libopencv_text.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_face.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_xobjdetect.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_xfeatures2d.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_shape.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_video.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_calib3d.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_features2d.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_ml.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_highgui.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_videoio.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_imgcodecs.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_imgproc.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_flann.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_core.3.0.0.dylib
CircleDetector: /usr/local/lib/libopencv_hal.a
CircleDetector: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
CircleDetector: CMakeFiles/CircleDetector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/raffy4284/Desktop/test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CircleDetector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CircleDetector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CircleDetector.dir/build: CircleDetector

.PHONY : CMakeFiles/CircleDetector.dir/build

CMakeFiles/CircleDetector.dir/requires: CMakeFiles/CircleDetector.dir/CircleDetector.cpp.o.requires

.PHONY : CMakeFiles/CircleDetector.dir/requires

CMakeFiles/CircleDetector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CircleDetector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CircleDetector.dir/clean

CMakeFiles/CircleDetector.dir/depend:
	cd /Users/raffy4284/Desktop/test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/raffy4284/Desktop/test /Users/raffy4284/Desktop/test /Users/raffy4284/Desktop/test /Users/raffy4284/Desktop/test /Users/raffy4284/Desktop/test/CMakeFiles/CircleDetector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CircleDetector.dir/depend

