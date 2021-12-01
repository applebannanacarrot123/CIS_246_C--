#ifndef FISH_H
#define FISH_H
#include <string>
#include "Animal.h"

class Fish : public Animal {
	public:
		explicit Fish(std::string="Fish");
		virtual void move() override;
};
#endif
