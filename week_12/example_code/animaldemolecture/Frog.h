#ifndef FROG_H
#define FROG_H
#include <string>
#include "Animal.h"

class Frog : public Animal {
	public:
		explicit Frog(std::string="Frog");
		//virtual void move() override;
};
#endif
