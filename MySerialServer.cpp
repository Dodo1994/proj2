//
// Created by doviwid on 12/30/18.
//

#include <netinet/in.h>
#include <vector>
#include <strings.h>
#include <unistd.h>
#include "MySerialServer.h"

bool shouldStop;
void MySerialServer::open(int port, ClientHandler *c) {
    shouldStop= false;
    new thread(MySerialServer::start, port, c);
}

void MySerialServer::stop() {
    shouldStop = true;
}

void MySerialServer::start(int port, ClientHandler *c) {
    int rate = 10;
    int sockfd, newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    char buffer[256];

    // create socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    // prepare the sockaddr_in structure
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);

    // bind
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    // listen
    listen(sockfd, rate);
    clilen = sizeof(cli_addr);

    // accept connection from an incoming client
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);
    if (newsockfd < 0) {
        perror("ERROR on accept");
        exit(1);
    }

    // if connection is established then start communicating
    while (!shouldStop) {
        sleep(1 / rate);
        bzero(buffer, 256);
        read(newsockfd, buffer, 255);
        cout << buffer << endl;
    }
}
// TODO : global or pointer.
// TODO : how would parallel work?.