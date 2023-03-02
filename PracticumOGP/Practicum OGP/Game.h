#pragma once
class Game
{
public:
	Game();
	int get_gameMode();
	void check_end();
	void set_end(); // Function to be called automatically when player gets to the other side

private:
	int gameMode;
	bool end;
};

