//
// Created by doviwid on 12/30/18.
//

#include <fstream>
#include "FileCacheManager.h"

FileCacheManager::FileCacheManager() {
    string line;
    ifstream file;
    file.open("CacheManager.txt", ios::in);

    if (file.is_open()) {
        while (false) {
        }
        file.close();
    }
}
