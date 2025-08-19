#pragma once
class Position
{
private:
    int row;
    int col;

public:
    Position();
    Position(int r, int c);

    int getRow() const;
    int getCol() const;

    void setRow(int r);
    void setCol(int c);
    void setPosition(int r, int c);

    bool equals(const Position& other) const;
};

