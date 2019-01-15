//
// Created by ori on 1/6/19.
//

#ifndef PROJ2222_MYTESTCLIENTHANDLER_H
#define PROJ2222_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManagers.h"


template <class Solution ,class Problem>
class MyTestClientHandler : public ClientHandler {
    Solver<Problem,Solution> *solver;
    CacheManagers<Problem,Solution> *cm;

public:
    MyTestClientHandler(CacheManagers<Problem, Solution>* cm, Solver<Problem, Solution>* solver);

    void handleClient(istream in,ostream out) override;
};



#endif //PROJ2222_MYTESTCLIENTHANDLER_H
