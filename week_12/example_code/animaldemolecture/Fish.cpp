#include <iostream>
#include <string>
#include "Fish.h"

Fish::Fish(std::string t) {
	type = t;
}

void Fish::move() {
	std::cout << "I move by swimming!" << std::endl;
}
