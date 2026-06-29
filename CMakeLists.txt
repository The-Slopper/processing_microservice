# Processing - (c) 2026 Example Org - MIT License
# Author: Engineering Team <engineering@example.com>
cmake_minimum_required(VERSION 3.27)
project(processing_microservice
        VERSION 1.0.0
        DESCRIPTION "Controlled execution of operating system processes."
        HOMEPAGE_URL "https://git.example.com/processing-microservice"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)

file(GLOB SOURCES src/*.cpp)
add_executable(app ${SOURCES})

enable_testing()
add_test(NAME unit COMMAND app)
