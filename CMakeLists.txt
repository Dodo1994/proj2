cmake_minimum_required(VERSION 3.13)
project(proj2)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj2 main.cpp Server.h MySerialServer.cpp MySerialServer.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.h CacheManager.h FileCacheManager.cpp FileCacheManager.h StringReverser.cpp StringReverser.h)