#include <iostream>
#include <string>
#include "Shark.h"

Shark::Shark(std::string t) {
	type = t;
}

void Shark::move() {
	std::cout << "I move by swimming and eating people!" << std::endl;
}
