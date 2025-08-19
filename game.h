#pragma once
class game {
private:
	int turn;
	int day;
	int night;
	char time;
	int money;
public:
	game();
	~game();

	// getters
	int getTurn() const;
	int getDay() const;
	int getNight() const;
	char getTime() const;
	int getMoney() const;
	// setters
	void setTurn();
	void setDay();
	void setNight();
	void setTime();
	void setMoney(int passedIncrement);

	void doIntro();
	void doOutro();
	bool endGame() const;
};