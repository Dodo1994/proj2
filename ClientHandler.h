//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_CLIENTHANDLER_H
#define PROJ2_CLIENTHANDLER_H

#include <iostream>
#include <fstream>

using namespace std;

class ClientHandler {
public:
    virtual void handleClient(istream in,ostream out)=0;
};


#endif //PROJ2_CLIENTHANDLER_H
