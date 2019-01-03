//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_MYSERIALSERVER_H
#define PROJ2_MYSERIALSERVER_H

#include "Server.h"
#include <thread>

using namespace server_side;

class MySerialServer : public Server {

public:
    void open(int port, ClientHandler *c);

    void stop();

    static void start(int port, ClientHandler *c);
};


#endif //PROJ2_MYSERIALSERVER_H
