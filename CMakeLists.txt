cmake_minimum_required(VERSION 3.10)
project(parse_account)

set(CMAKE_CXX_STANDARD 14)

set(YAML_DIR yaml-cpp-master/include)

include_directories(${YAML_DIR})

add_executable(parse_account parse_account.cpp)