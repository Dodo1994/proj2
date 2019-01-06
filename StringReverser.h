//
// Created by doviwid on 1/6/19.
//

#ifndef PROJ2_STRINGREVERSER_H
#define PROJ2_STRINGREVERSER_H

#include <string>
#include "Solver.h"

using namespace std;

class StringReverser : public Solver<string, string> {
public:
    string solve(string prob);
};


#endif //PROJ2_STRINGREVERSER_H
