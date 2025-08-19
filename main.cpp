#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Windows.h"
#include "board.h"
#include "game.h"
using std::cout;
using std::endl;
int main() {
	game testGame;
	board testBoard;
	testGame.doIntro();
	Sleep(500);
	while (testGame.endGame() == false) {
		cout << endl;
		if (testGame.getTurn() == 1 or testGame.getTurn() % 10 == 0) {
			cout << "**********" << endl;
			cout << "Time: " << testGame.getTime() << testGame.getDay() << endl;
			cout << "Turn: " << testGame.getTurn() << endl;
			cout << "Money: $" << testGame.getMoney() << endl;
			cout << "**********" << endl;
		}
		cout << endl;
		cout << "Turn " << testGame.getTurn() << endl;
		testBoard.printBoard();
		testBoard.move();
		testGame.setTurn();
	}
	cout << "HELLO" << endl;
	Sleep(500);
	testGame.doOutro();
	_CrtDumpMemoryLeaks();
	return 0;
}