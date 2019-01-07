#include <iostream>
#include "MySerialServer.h"
#include "FileCacheManager.h"
#include "MyTestClientHandler.h"
#include "StringReverser.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


namespace boot {
using std::string;
    class Main {

    public:
        int main(int argc, const char * argv[]) {
            // if get arguments
            if(argc>1){
                // server
                Server* server = new MySerialServer;

                // cache manager
                CacheManager<string,string>* cacheManager = new FileCacheManager();

                // solver
                Solver<string,string>* solver = new StringReverser;

                // client handler
                ClientHandler* clientHandler = new MyTestClientHandler<string,string>(cacheManager, solver);

                // start server
                server->open(stoi(argv[0]), clientHandler);
            }

            std::cout << "Hello, World!" << std::endl;

            return 0;

        }
    };
}