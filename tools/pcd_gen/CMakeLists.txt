cmake_minimum_required(VERSION 2.8)
project(pcd_gen)

find_package(PCL 1.8 REQUIRED)

set(PMR_INCLUDE_DIRS ../../src)
include_directories(${PCL_INCLUDE_DIRS} ${PMR_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

set(SRC_LIST 
../../src/common/model_stl.cpp 
../../src/io/stl_reader.cpp
../../src/conversion/stl2pcd.cpp
src/pcd_generator.cpp
)

add_executable(pcd_gen ${SRC_LIST})
target_link_libraries(pcd_gen ${PCL_LIBRARIES})
