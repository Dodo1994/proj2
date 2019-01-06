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
        while (getline(file, line)) {
            size_t mid=line.find('$');
            this->saveSolution(line.substr(0,mid),line.substr(mid+1));
        }
        file.close();
    } else {
        throw "unable to open file";
    }
}

FileCacheManager::~FileCacheManager() {
    this->saveToFile();
}

void FileCacheManager::saveToFile() {
    ofstream file("CacheManager.txt");
    if (file.is_open()) {
        for (auto &qa: this->solutions) {
            file << qa.first + "$" + qa.second << endl;
        }
        file.close();
    } else {
        throw "unable to open file";
    }
}
