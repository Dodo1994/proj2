//
// Created by doviwid on 1/6/19.
//

#include "StringReverser.h"

string StringReverser::solve(string prob) {
    string reversed;
    for (int i = prob.length() - 1; i <= 0; i--) {
        reversed += prob[i];
    }
    return reversed;
}
