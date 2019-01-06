//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_CACHEMANAGER_H
#define PROJ2_CACHEMANAGER_H

#include <map>

using namespace std;
template <class S, class P>
class CacheManager {
protected:
    map<P, S> solutions;
public:
    virtual bool isSavedSolution(P p){
        return solutions.count(p) != 0;
    }

    virtual S getSolution(P p) {
        return solutions[p];
    }

    virtual void saveSolution(P p, S s) {
        solutions[p] = s;
    }
};


#endif //PROJ2_CACHEMANAGER_H
