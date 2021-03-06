cmake_minimum_required(VERSION 2.8)
project(icfpso)


find_package(PCL 1.8 REQUIRED)

find_package(PCL 1.7 REQUIRED PATHS /usr NO_DEFAULT_PATH)

find_package(VTK REQUIRED)

include(${VTK_USE_FILE})
set(PMR_INCLUDE_DIRS src)
include_directories(${PCL_INCLUDE_DIRS} ${PMR_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

set(SRC_LIST 
src/common/model_stl.cpp 
src/io/stl_reader.cpp
src/conversion/stl2pcd.cpp
src/visualization/stl_visualizer.cpp

src/registration/icf/icf.cpp
src/registration/icf/icf_pso.cpp
src/registration/icf/distance_measurer.cpp
src/registration/icf/min_dist_func.cpp
src/registration/mcn/mcn.cpp

src/filter/stl_downSampler.cpp

src/math/particle.cpp 
src/math/pose.cpp
src/math/transform.cpp
src/math/swarm.cpp
src/math/evaluate_fitness_func.cpp

src/examples/icfMethodTest.cpp
#src/examples/pointMethodTest.cpp
)

add_executable(demo ${SRC_LIST})
target_link_libraries(demo ${PCL_LIBRARIES} ${VTK_LIBRARIES})

