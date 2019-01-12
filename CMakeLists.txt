cmake_minimum_required(VERSION 3.13)
project(proj2)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS -pthread)

add_executable(proj2 main.cpp Server.h MySerialServer.cpp MySerialServer.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.h CacheManager.h FileCacheManager.cpp FileCacheManager.h StringReverser.cpp StringReverser.h AStar.cpp BestFirstSearch.cpp BFS.cpp DFS.cpp HillClimbing.cpp MyParallelServer.cpp State.cpp Searchable.h Searcher.h TestSearcher.cpp SearchSolver.cpp SolverImp.cpp MatrixCreator.cpp Matrix.cpp Utils.cpp)