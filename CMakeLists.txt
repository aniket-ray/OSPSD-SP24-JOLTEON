cmake_minimum_required(VERSION 3.10)
project(calculator_project)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 包括Google Test作为依赖项
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# 创建计算器库
add_library(calculator_lib src/calculator.cpp)

# 创建一个可执行文件用于计算器应用程序
add_executable(calculator_app src/main.cpp) # 假设您的main函数现在在src/main.cpp中
target_link_libraries(calculator_app calculator_lib)

# 创建测试可执行文件
add_executable(calculator_tests test/test_calculator.cpp)
target_link_libraries(calculator_tests gtest_main calculator_lib)
