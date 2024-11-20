cmake_minimum_required(VERSION 3.29)
project(SuperResolutionProject)

set(CMAKE_CXX_STANDARD 20)

set(OpenCV_DIR "C:/opencv/build")

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Add source files
add_executable(SuperResolutionProject main.cpp)

# Link OpenCV libraries
target_link_libraries(SuperResolutionProject ${OpenCV_LIBS})

