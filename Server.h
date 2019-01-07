//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_SERVER_H
#define PROJ2_SERVER_H

#include "ClientHandler.h"

namespace server_side {
    class Server {

    public:
        virtual void open(int port, ClientHandler *c) = 0;

        virtual void stop() = 0;
    };
}


#endif //PROJ2_SERVER_H
