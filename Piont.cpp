//
// Created by doviwid on 1/13/19.
//

#include "Piont.h"

Piont::Piont(int x, int y) {
    this->row = x;
    this->col = y;
}

void Piont::setRow(int x) {
    this->row = x;
}

void Piont::setCol(int y) {
    this->col = y;
}

int Piont::getRow() {
    return this->row;
}

int Piont::getCol() {
    return this->col;
}
