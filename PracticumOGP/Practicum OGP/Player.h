#pragma once
#include <iostream>
#include <string>
#include <vector>


class Player
{
public:
	Player();
	std::string get_name();
	void update_score();
	void print_underline();

private:
	std::string name;
	int score;
	std::vector<int> pionen;
};

