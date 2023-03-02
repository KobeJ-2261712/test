// Practica OGP groep: 7
// Namen: Kobe Jacobs en Nikolai Filatov

// Headers:
#include <iostream>
#include <string>
#include <math.h>
#include "Bord.h"
// #include "Vak.h"
#include "Player.h"
#include "Game.h"

//#include "Practicum-OGP.h" // Alle klassen





// Code:
int main(void) {
	//Local Variables

	// Start game
	Game newGame;

	if (newGame.get_gameMode() == 0) // Check if user wants to play PvP or against the computer
	{
		// Declare 2 players which call the Player constructor
		Player player1;
		Player player2;

		// Declare chess board
		Bord speelbordGame;
		// Fill chessboard
		speelbordGame.fill_board();

		player2.print_underline();
		// Greet player 2
		std::cout << "\t" << "Welcome player2: " << player2.get_name() << std::endl;
		player2.print_underline();
		std::cout << "\n";
		// Print out the chessboard
		speelbordGame.print_board();
		std::cout << "\n";
		player1.print_underline();
		// Greet player 1
		std::cout << "\t" << "Welcome player1: " << player1.get_name() << std::endl;
		player1.print_underline();
	}
	else
	{

	}





	



	//Main() Code


	// End of Code
	return 0;
}