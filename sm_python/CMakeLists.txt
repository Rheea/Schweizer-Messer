cmake_minimum_required(VERSION 2.8.3)
project(sm_python)

find_package(catkin_simple REQUIRED)
catkin_simple()

include_directories(${Eigen_INCLUDE_DIRS})

add_definitions(-std=c++0x -D__STRICT_ANSI__)

# Set up the python exports.
SET(PY_PROJECT_NAME sm_python)
SET(PY_PACKAGE_DIR python/sm)

find_package(Boost REQUIRED COMPONENTS system serialization)

add_python_export_library(${PY_PROJECT_NAME} ${PY_PACKAGE_DIR}
  src/module.cpp
  src/export_rotational_kinematics.cpp
  src/export_rotations.cpp
  src/export_transformations.cpp
  src/export_quaternion_algebra.cpp
  src/export_homogeneous.cpp
  src/exportTransformation.cpp
  src/exportHomogeneousPoint.cpp
  src/exportTimestampCorrector.cpp
  src/exportPropertyTree.cpp
  src/exportEigen.cpp
  src/exportUncertainVector.cpp
  src/exportMatrixArchive.cpp
  src/export_kinematics_property_tree.cpp
  src/export_eigen_property_tree.cpp
  src/Logging.cpp
  src/Timing.cpp
  src/exportNsecTime.cpp
  src/random.cpp
)

target_link_libraries(${PY_PROJECT_NAME} ${Boost_LIBRARIES})

cs_install()
cs_export()
