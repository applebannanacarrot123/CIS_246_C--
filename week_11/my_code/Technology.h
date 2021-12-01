// David Kovalev
// Week 11
// Technology class

// Include guard
#ifndef Technology_h
#define Technology_h

#include <string>
#include "Company.h"

class Technology : public Company{
	public:
		Technology(double price);
		
		std::string toString() const;
};

#endif
