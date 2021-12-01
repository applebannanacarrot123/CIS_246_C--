#ifndef SHARK_H
#define SHARK_H
#include <string>
#include "Fish.h"

class Shark : public Fish  {
	public:
		explicit Shark(std::string="Shark");
		virtual void move() override;
};
#endif
