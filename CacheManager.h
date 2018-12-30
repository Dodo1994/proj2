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
    virtual bool isSavedSolution(Problem *p) = 0;

    Solution *getSolution(Problem *p) {
        return solutions[p];
    }

    void saveSolution(Problem *p, Solution *s) {
        solutions[p] = s;
    }
};


#endif //PROJ2_CACHEMANAGER_H
