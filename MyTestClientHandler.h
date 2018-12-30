//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_MYTESTCLIENTHANDLER_H
#define PROJ2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"

class MyTestClientHandler : public ClientHandler{
public:
    void handleClient(istream in,ostream out);
};


#endif //PROJ2_MYTESTCLIENTHANDLER_H
