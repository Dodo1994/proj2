//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_MYTESTCLIENTHANDLER_H
#define PROJ2_MYTESTCLIENTHANDLER_H

#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"


template <class Solution ,class Problem>
class MyTestClientHandler : public ClientHandler{
    Solver<Problem,Solution> *solver;
    CacheManager<Problem,Solution> *cm;

public:
    MyTestClientHandler(CacheManager<Problem,Solution>* cm, Solver<Problem,Solution>* solver);

    void handleClient(istream in,ostream out) override;
};


#endif //PROJ2_MYTESTCLIENTHANDLER_H
