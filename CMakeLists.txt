cmake_minimum_required(VERSION 3.10)  
project(test)  

set(CMAKE_CXX_STANDARD 11) # 设置 C++ 标准，根据需要调整  
set(CMAKE_CXX_STANDARD_REQUIRED True) # 使C++标准设置生效

# 添加所有 .cpp 文件到可执行文件  
file(GLOB MY_PROGRAM_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/add/*.cpp")

# 添加头文件路径
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# 添加可执行文件
add_executable(my_program ${MY_PROGRAM_SOURCES})
