#pragma once
#include <iostream>
#include <array>
#include <string>
#include "Vak.h"

class Bord { //define board
private:
	std::array<std::array<std::string, 8>, 8> speelbord;

public:
	void fill_board();
	void print_board();
	Bord(); // constructor
};

