#include "game.h"
#include <iostream>
#include <string>
#include "Windows.h"
using std::cout;
using std::endl;
using std::string;
game::game() {
	turn = 1;
	day = 1;
	night = 1;
	time = 'D';
	money = 0;
}
game::~game() {

}
int game::getTurn() const {
	return turn;
}
int game::getDay() const {
	return day;
}
int game::getNight() const {
	return night;
}
char game::getTime() const {
	return time;
}
int game::getMoney() const {
	return money;
}
void game::setTurn() {
	turn += 1;
}
void game::setDay() {
	day += 1;
}
void game::setNight() {
	night += 1;
}
void game::setTime() {
	if (time == 'D') {
		time = 'N';
	}
	else if (time == 'N') {
		time = 'D';
	}
}
void game::setMoney(int passedIncrement) {
	money += passedIncrement;
}
void game::doIntro() {
	string introText = "You are a farmer who owns a restaurant and a plot of land. It is your\n"
						"main source of income and many people in the community love your food.\n"
						"However, the government wants to claim your land for economic purposes.\n"
						"They have proposed that if you hit a weekly sales quota for one month\n"
						"and pay them, they will allow you to keep your land. Convince the\n"
						"government to leave you alone by fulfilling their request.";
	for (int i = 0; i < 407; ++i) {
		cout << introText[i];
		//Sleep(40); // comment out while testing
	}
	cout << endl;
}
void game::doOutro() {
	cout << endl;
	string outroText = "YOU DID IT! The government will now allow you to keep your business.\n"
						"Congratulations!";
	for (int i = 0; i < 85; ++i) {
		cout << outroText[i];
		//Sleep(40); // comment out while testing
	}
	cout << endl;
}
bool game::endGame() const {
	if (turn < 5) {
		return false;
	}
	else {
		return true;
	}
}