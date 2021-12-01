// David Kovalev
// Week 11 Homework
// Technology class interface

#include <sstream>
#include <iomanip>
#include "Technology.h"

// Constructor
Technology::Technology(double p) : Company(p){
}

// Returns string representation of Technology company
std::string Technology::toString() const{
	std::ostringstream output;
	
	output << "Technology:" << std::setw(10) << Company::toString();
	
	return output.str();
}
