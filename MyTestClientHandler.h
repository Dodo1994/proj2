//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_MYTESTCLIENTHANDLER_H
#define PROJ2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
template <class S ,class P>
class MyTestClientHandler : public ClientHandler{
    Solver<S,P> *solver;
    CacheManager<S,P> *cm;
public:

    void handleClient(istream in,ostream out);
};


#endif //PROJ2_MYTESTCLIENTHANDLER_H
