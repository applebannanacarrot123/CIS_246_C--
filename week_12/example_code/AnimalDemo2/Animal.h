#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
class Animal {
	public:
		explicit Animal(std::string="Animal");
		virtual void move();
		std::string getName();
	protected:
		std::string name;
};
#endif
