// David Kovalev
// Week 11
// Manufacturer class

// Include guard
#ifndef Manufacturer_h
#define Manufacturer_h

#include <string>
#include "Company.h"

class Manufacturer : public Company{
	public:
		Manufacturer(double price);
		
		std::string toString() const;
};

#endif
