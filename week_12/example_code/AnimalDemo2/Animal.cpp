//class Animal {
//	public:
//		Animal(string="Animal");
//		void move();
//	private:
//		string name;
//};

#include "Animal.h"
#include <iostream>

Animal::Animal(std::string n){
	name = n;
}

void Animal::move() {
//	std::cout << "Move function in animal" << std::endl;
}

std::string Animal::getName() {
	return name;
}
