// David Kovalev
// Week 11 Homework
// Manufacturer class interface

#include <sstream>
#include <iomanip>
#include "Manufacturer.h"

// Constructor
Manufacturer::Manufacturer(double p) : Company(p){
}

// Returns string representation of Technology company
std::string Manufacturer::toString() const{
	std::ostringstream output;
	
	output << "Manufacturer:" << std::setw(8) << Company::toString();
	
	return output.str();
}
