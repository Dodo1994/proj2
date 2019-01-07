//
// Created by ori on 1/6/19.
//

#ifndef PROJ2222_MYPARALLELSERVER_H
#define PROJ2222_MYPARALLELSERVER_H


#include "Server.h"
#include "ClientHandler.h"

using namespace server_side;

class MyParallelServer : public Server {

public:
    MyParallelServer()= default;

    void stop();

    void open(int port, ClientHandler *c);
};


#endif //PROJ2222_MYPARALLELSERVER_H
