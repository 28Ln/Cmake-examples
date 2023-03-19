cmake_minimum_required(VERSION 3.16.3)
project(boost_test_demo)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

#enable_testing() # 添加测试

add_executable(${PROJECT_NAME} test.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

# 添加测试
#add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME})
