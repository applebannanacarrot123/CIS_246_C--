#include "Bird.h"
#include <iostream>

Bird::Bird(std::string n){
	name = n;
}

void Bird::move() {
	std::cout << "I move by flying!" << std::endl;
}
