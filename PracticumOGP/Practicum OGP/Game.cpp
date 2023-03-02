#include "Game.h"
#include <iostream>

Game::Game() {
	std::cout << "Play PvP(0) or against Computer (1): ";
	std::cin >> Game::gameMode;
	std::cout << "\n";
}

int Game::get_gameMode() {
	return Game::gameMode;
}

void Game::check_end() {

}

void Game::set_end() {

}
