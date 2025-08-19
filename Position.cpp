#include "Position.h"

Position::Position() : row(0), col(0) {}

Position::Position(int r, int c) : row(r), col(c) {}

int Position::getRow() const {
    return row;
}

int Position::getCol() const {
    return col;
}


void Position::setRow(int r) {
    row = r;
}


void Position::setCol(int c) {
    col = c;
}

bool Position::equals(const Position& other) const {
    return row == other.row && col == other.col;
}
void Position::setPosition(int r, int c) {
    row = r;
    col = c;
}

