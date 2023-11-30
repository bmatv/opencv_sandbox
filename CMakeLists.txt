cmake_minimum_required(VERSION 3.25)
project(opencv_sandbox)

set(CMAKE_CXX_STANDARD 17)



find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(opencv_test main.cpp)
target_link_libraries( opencv_test ${OpenCV_LIBS} )

#target_link_directories(opencv OpenCV)
