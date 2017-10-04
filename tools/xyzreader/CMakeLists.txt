cmake_minimum_required(VERSION 2.8)
project(xyzreader)

find_package(PCL 1.8 REQUIRED)

set(TP_INCLUDE_DIRS src)
include_directories(${PCL_INCLUDE_DIRS} ${TP_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

set(SRC_LIST 
src/xyzreader.cpp
src/test.cpp
)

add_executable(xyzreader ${SRC_LIST})
target_link_libraries(xyzreader ${PCL_LIBRARIES})
