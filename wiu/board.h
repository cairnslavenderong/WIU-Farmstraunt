#pragma once
class board {
private:
	char boardArray[20][20];
	int playerRow;
	int playerCol;
public:
	board();
	~board();

	virtual void printBoard();
	virtual void move();
};