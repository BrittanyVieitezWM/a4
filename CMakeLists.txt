cmake_minimum_required(VERSION 3.17)
project(a4)

set(CMAKE_CXX_STANDARD 14)

add_executable(a4 main.cpp MailingAddress.cpp MailingAddress.h MAHashTable.cpp MAHashTable.h)