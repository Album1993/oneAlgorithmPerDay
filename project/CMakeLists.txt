cmake_minimum_required(VERSION 3.6)
project(project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp AddFromOneToN/UseFunctionPointerToAdd.cpp AddFromOneToN/UseFunctionPointerToAdd.h AddFromOneToN/AddFromOneToN.h functionlist.txt AddFromOneToN/UseGeneraterFunctionToAdd.cpp AddFromOneToN/UseGeneraterFunctionToAdd.h AddFromOneToN/UseAbstractFunctionToAdd.cpp AddFromOneToN/UseAbstractFunctionToAdd.h CountOneInBinary/CountOnInBinary.cpp CountOneInBinary/CountOnInBinary.h)
add_executable(project ${SOURCE_FILES})