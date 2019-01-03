//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_CACHEMANAGER_H
#define PROJ2_CACHEMANAGER_H

#include <map>
#include "Problem.h"
#include "Solution.h"

using namespace std;

class CacheManager {
    map<Problem *, Solution *> solutions;
public:
    virtual bool isSavedSolution(Problem *p){
        return solutions.count(p) != 0;
    }

    virtual Solution *getSolution(Problem *p) {
        return solutions[p];
    }

    virtual void saveSolution(Problem *p, Solution *s) {
        solutions[p] = s;
    }
};


#endif //PROJ2_CACHEMANAGER_H
