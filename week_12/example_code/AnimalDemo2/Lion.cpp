#include "Lion.h"
#include <iostream>

Lion::Lion(std::string n){
	name = n;
}

void Lion::move() {
	std::cout << "I move by running!" << std::endl;
}
