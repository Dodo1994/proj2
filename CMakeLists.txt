cmake_minimum_required(VERSION 3.13)
project(proj2)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS -pthread)

add_executable(proj2 main.cpp Server.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.h StringReverser.cpp StringReverser.h State.cpp Searchable.h Searcher.h SearchSolver.cpp SolverImp.cpp MatrixCreator.cpp Matrix.cpp Utils.cpp Point.cpp Point.h server_with_oop.h server_with_timeout.h MyServers.h)