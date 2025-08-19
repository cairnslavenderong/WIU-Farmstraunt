#include "board.h"
#include <iostream>
#include "conio.h"
using std::cout;
using std::endl;
board::board() {
	for (int row = 0; row < 20; ++row) {
		for (int col = 0; col < 20; ++col) {
			boardArray[row][col] = ' ';
		}
	}
	boardArray[0][0] = 'P';
	playerRow = 0;
	playerCol = 0;
}
board::~board() {

}
void board::printBoard() {
	cout << '+';
	for (int i = 0; i < 39; ++i) {
		cout << '-';
	}
	cout << '+' << endl;
	for (int row = 0; row < 20; ++row) {
		for (int col = 0; col < 20; ++col) {
			cout << "|";
			cout << boardArray[row][col];
		}
		cout << "|" << endl;
	}
	cout << '+';
	for (int i = 0; i < 39; ++i) {
		cout << '-';
	}
	cout << '+' << endl;

}
void board::move() {
	char moveDirection;
	cout << "Enter WASD: ";
	moveDirection = _getch();
	cout << moveDirection << endl;
	int oldRow = playerRow;
	int oldCol = playerCol;
	switch (moveDirection) {
	case 'w':
	case 'W':
		if (playerRow > 0) {
			playerRow -= 1;
		}
		break;
	case 'a':
	case 'A':
		if (playerCol > 0) {
			playerCol -= 1;
		}
		break;
	case 's':
	case 'S':
		if (playerRow < 19) {
			playerRow += 1;
		}
		break;
	case 'd':
	case 'D':
		if (playerCol < 19) {
			playerCol += 1;
		}
		break;
	default:
		break;
	}
	boardArray[oldRow][oldCol] = ' ';
	boardArray[playerRow][playerCol] = 'P';
}