# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/santiago/workspace/ros/xsens

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/santiago/workspace/ros/xsens/build

# Utility rule file for ROSBUILD_gensrv_py.

# Include the progress variables for this target.
include CMakeFiles/ROSBUILD_gensrv_py.dir/progress.make

CMakeFiles/ROSBUILD_gensrv_py: ../src/xsens/srv/__init__.py

../src/xsens/srv/__init__.py: ../src/xsens/srv/_Calibrate.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/santiago/workspace/ros/xsens/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/xsens/srv/__init__.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py --initpy /home/santiago/workspace/ros/xsens/srv/Calibrate.srv

../src/xsens/srv/_Calibrate.py: ../srv/Calibrate.srv
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/roslib/bin/gendeps
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/geometry_msgs/msg/Vector3.msg
../src/xsens/srv/_Calibrate.py: ../manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/std_msgs/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/stacks/bullet/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/sensor_msgs/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/roslang/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/roscpp/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/rosconsole/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/stacks/geometry/angles/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/rospy/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/rostest/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/roswtf/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/share/message_filters/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/stacks/geometry/tf/manifest.xml
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/stacks/geometry/tf/msg_gen/generated
../src/xsens/srv/_Calibrate.py: /opt/ros/fuerte/stacks/geometry/tf/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/santiago/workspace/ros/xsens/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/xsens/srv/_Calibrate.py"
	/opt/ros/fuerte/share/rospy/rosbuild/scripts/gensrv_py.py --noinitpy /home/santiago/workspace/ros/xsens/srv/Calibrate.srv

ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py
ROSBUILD_gensrv_py: ../src/xsens/srv/__init__.py
ROSBUILD_gensrv_py: ../src/xsens/srv/_Calibrate.py
ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py.dir/build.make
.PHONY : ROSBUILD_gensrv_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_gensrv_py.dir/build: ROSBUILD_gensrv_py
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/build

CMakeFiles/ROSBUILD_gensrv_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/clean

CMakeFiles/ROSBUILD_gensrv_py.dir/depend:
	cd /home/santiago/workspace/ros/xsens/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/santiago/workspace/ros/xsens /home/santiago/workspace/ros/xsens /home/santiago/workspace/ros/xsens/build /home/santiago/workspace/ros/xsens/build /home/santiago/workspace/ros/xsens/build/CMakeFiles/ROSBUILD_gensrv_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/depend
