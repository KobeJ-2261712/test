/* This header file defines how a chess board should look like */
// System Headers:
#include <iostream>
#include <array>
#include <string>

// Define Board

class Board{
private:
	std::array<std::array<std::string, 8>, 8> speelbord; // 8x8 Chess Board

public:
	void fill_board();
	void print_board();
	Board(); //constructor
};

