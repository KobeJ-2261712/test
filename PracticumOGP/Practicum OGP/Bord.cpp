#include "Bord.h"
#include <string>
#include <iostream>

Bord::Bord() {
}
void Bord::fill_board() {

	int counter = 7;
	for (int i = 1; i < 9; i++)
	{

		for (int j = 0; j < 8; j++)
		{
			switch (j) {
			case 0:
				Bord::speelbord[i - 1][j] = "A" + std::to_string(i + counter);
				break;
			case 1:
				Bord::speelbord[i - 1][j] = "B" + std::to_string(i + counter);
				break;
			case 2:
				Bord::speelbord[i - 1][j] = "C" + std::to_string(i + counter);
				break;
			case 3:
				Bord::speelbord[i - 1][j] = "D" + std::to_string(i + counter);
				break;
			case 4:
				Bord::speelbord[i - 1][j] = "E" + std::to_string(i + counter);
				break;
			case 5:
				Bord::speelbord[i - 1][j] = "F" + std::to_string(i + counter);
				break;
			case 6:
				Bord::speelbord[i - 1][j] = "G" + std::to_string(i + counter);
				break;
			case 7:
				Bord::speelbord[i - 1][j] = "H" + std::to_string(i + counter);
				break;

			}
			
		}
		counter = counter - 2;
	}
}
void Bord::print_board() {
	for (int i = 0; i < 8; i++) //i = rij en j = kolom
	{
		std::cout << "\t";
		for (int j = 0; j < 8; j++)
		{
			std::cout << Bord::speelbord[i][j] << " ";
		}
		std::cout << "\n";
	}
}

