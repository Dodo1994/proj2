//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_SOLVER_H
#define PROJ2_SOLVER_H


#include "Solution.h"
#include "Problem.h"

class Solver {
public:
    virtual Solution solve(Problem prob) = 0;
};


#endif //PROJ2_SOLVER_H
