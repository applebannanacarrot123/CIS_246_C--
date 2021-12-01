// David Kovalev
// Week 12
// Technology class

// Include guard
#ifndef Technology_h
#define Technology_h

#include <string>
#include "Company.h"

class Technology : public Company{
	public:
		Technology(double price);
		
		virtual std::string toString() const override;
		
		virtual void update() override;
};

#endif
