//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_FILECACHEMANAGER_H
#define PROJ2_FILECACHEMANAGER_H


#include "CacheManager.h"
// TODO: support file saving and loading.
class FileCacheManager: public CacheManager<string,string> {
public:
    FileCacheManager();
};


#endif //PROJ2_FILECACHEMANAGER_H
