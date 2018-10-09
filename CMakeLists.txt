cmake_minimum_required(VERSION 3.12)
project(datastructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(datastructure main.cpp cppfiles/countingSortInc.cpp hfiles/countingSortInc.h hfiles/test.h cppfiles/test.cpp hfiles/qsort.h designPattern/singleton.h designPattern/singleton2.h designPattern/factoryinc.h niuke/heapsort.h niuke/insertsort.h)


