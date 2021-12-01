#include <iostream>
#include <string>
#include "Animal.h"

Animal::Animal(std::string t) {
	type = t;
}

void Animal::move() {
	std::cout << "Move function in Animal class" << std::endl;
}
