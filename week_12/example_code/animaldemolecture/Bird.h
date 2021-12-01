#ifndef BIRD_H
#define BIRD_H
#include <string>
#include "Animal.h"

class Bird : public Animal {
	public:
		explicit Bird(std::string="Bird");
		virtual void move() override;
		void layEgg();
};
#endif
