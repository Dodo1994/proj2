//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_MYSERIALSERVER_H
#define PROJ2_MYSERIALSERVER_H

#include "Server.h"

using namespace server_side;

class MySerialServer : public Server {
public:
    void open(int port, ClientHandler c);

    void stop();
};


#endif //PROJ2_MYSERIALSERVER_H
