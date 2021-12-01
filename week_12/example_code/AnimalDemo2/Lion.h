#ifndef LION_H
#define LION_H
#include <string>
#include "Animal.h"

class Lion : public Animal {
	public:
		explicit Lion(std::string="Lion");
		virtual void move() override;
};
#endif
