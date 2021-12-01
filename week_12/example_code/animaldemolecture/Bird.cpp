#include <iostream>
#include <string>
#include "Bird.h"

Bird::Bird(std::string t) {
	type = t;
}

void Bird::move() {
	std::cout << "I move by flying!" << std::endl;
}

void Bird::layEgg() {
		std::cout << "Laying an egg!" << std::endl;
}
