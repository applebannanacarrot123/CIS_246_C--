#include "Fish.h"
#include <iostream>

Fish::Fish(std::string n){
	name = n;
}

void Fish::move() {
	std::cout << "I move by swimming!" << std::endl;
}
