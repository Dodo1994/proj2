


#ifndef PROJ2222_BESTFIRSTSEARCH_H
#define PROJ2222_BESTFIRSTSEARCH_H


#include <queue>
#include <algorithm>
#include "Searcher.h"


using std::list;
using std::priority_queue;
using std::find;

template <class T>
class BestFirstSearch  : public Searcher<T, list<State<T>>> {

public:
    list<State<T>> search(Searchable<T> searchable);

private:
    list<State<T>> backTrace(State<T>);
};

#endif //PROJ2222_BESTFIRSTSEARCH_H
