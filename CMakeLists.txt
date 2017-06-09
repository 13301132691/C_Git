cmake_minimum_required(VERSION 3.7)
project(C_Git)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp oddSum.cpp oddSum.h Array2D.cpp prime_num.cpp m_out.cpp fraction_add.cpp)
add_executable(C_Git ${SOURCE_FILES})