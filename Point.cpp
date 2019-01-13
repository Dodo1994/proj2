//
// Created by doviwid on 1/13/19.
//

#include "Point.h"

Point::Point(int x, int y) {
    this->row = x;
    this->col = y;
}

void Point::setRow(int x) {
    this->row = x;
}

void Point::setCol(int y) {
    this->col = y;
}

int Point::getRow() {
    return this->row;
}

int Point::getCol() {
    return this->col;
}
