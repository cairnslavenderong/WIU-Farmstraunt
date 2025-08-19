#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Windows.h"
#include <random>
#include "board.h"
#include "game.h"
using std::cout;
using std::endl;
int main() {
	std::mt19937 generator(std::random_device{}());
	game testGame;
	board testBoard;
	testGame.doIntro();
	Sleep(500);
	while (testGame.endGame() == false) {
		if (testGame.getTurn() == 1 or testGame.getTurn() % 10 == 0) {
			cout << endl;
			cout << "**********" << endl;
			cout << "Time: " << testGame.getTime();
			if (testGame.getTime() == 'D') {
				cout << testGame.getDay() << endl;
			}
			else if (testGame.getTime() == 'N') {
				cout << testGame.getNight() << endl;
			}
			cout << "Turn: " << testGame.getTurn() << endl;
			cout << "Money: $" << testGame.getMoney() << endl;
			cout << "**********" << endl;
			cout << endl;
			if (testGame.getTime() == 'D') {
				testGame.setDay();
			}
			else if (testGame.getTime() == 'N') {
				testGame.setNight();
			}
			testGame.setTime();
			std::uniform_int_distribution<int> distr(1, 2);
			if (distr(generator) == 1) {
				testGame.setRaining(true);
				cout << "It is currently raining! ";
				if (testGame.getTime() == 'D') {
					cout << "Crops will now grow faster." << endl;
				}
				else if (testGame.getTime() == 'N') {
					cout << "More fish will appear." << endl;
				}
			}
			else {
				testGame.setRaining(false);
			}
			cout << endl;
		}
		cout << "Turn " << testGame.getTurn() << endl;
		testBoard.printBoard();
		testBoard.move();
		testGame.setTurn();
	}
	Sleep(500);
	testGame.doOutro();
	_CrtDumpMemoryLeaks();
	return 0;
}