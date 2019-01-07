//
// Created by ori on 1/6/19.
//

#ifndef PROJ2222_SEARCHABLE_H
#define PROJ2222_SEARCHABLE_H


#include "State.h"
#include "list"

using namespace std;

template <class T>
class Searchable{

public:
    virtual State<T> getInitialState()=0;
    virtual State<T> getGoalState()=0;
    virtual list<State<T>> getAllPossibleStates()=0;
};

#endif //PROJ2222_SEARCHABLE_H
