//
// Created by ori on 1/6/19.
//

#ifndef PROJ2222_DFS_H
#define PROJ2222_DFS_H


#include "Searcher.h"

template <class T>
class DFS : public Searcher<T>{

    T search(Searchable<T> searchable);
};


#endif //PROJ2222_DFS_H
