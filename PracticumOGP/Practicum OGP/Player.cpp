#include "Player.h"
#include <iostream>
#include <string>
#include <vector>

Player::Player() {
	Player::score = 0;
	// Ask user for a name
	std::cout << "Please enter a name: ";
	// store name in Player member
	std::cin >> Player::name;
	std::cout << std::endl;
}
std::string Player::get_name() {
	return Player::name;
}
void Player::update_score() {
	Player::score += 1;
}
void Player::print_underline() {
	std::cout << "--------------------------------------------" << std::endl;
}
