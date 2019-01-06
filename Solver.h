//
// Created by doviwid on 12/30/18.
//

#ifndef PROJ2_SOLVER_H
#define PROJ2_SOLVER_H


template <class S ,class P>
class Solver {
public:
    virtual S solve(P) = 0;
};


#endif //PROJ2_SOLVER_H
