#include "Vak.h"
#include <iostream>
#include <string>
#include <array>

Vak::Vak() {
	std::cout << "in Vak constructor" << std::endl;
}

std::string Vak::get_full_position() {
	std::string full_position;
	full_position += std::to_string(Vak::rij) + std::to_string(Vak::kolom);
	return full_position;
}

int Vak::get_kleur() {
	return Vak::kleur;
}
