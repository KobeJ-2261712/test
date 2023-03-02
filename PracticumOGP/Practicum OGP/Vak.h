#include <iostream>
#include <array>
#include <string>

class Vak {
public:
	Vak(); // Constructor
	std::string get_full_position();
	int get_kleur();

private:
	int rij;
	char kolom;
	std::string full_pos;
	int kleur;

};

