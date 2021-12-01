// David Kovalev
// Week 12
// Manufacturer class

// Include guard
#ifndef Manufacturer_h
#define Manufacturer_h

#include <string>
#include "Company.h"

class Manufacturer : public Company{
	public:
		Manufacturer(double price);
		
		virtual std::string toString() const override;
		
		virtual void update() override;
};

#endif
