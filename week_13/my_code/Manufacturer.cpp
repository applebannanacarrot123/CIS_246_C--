// David Kovalev
// Week 12 Homework
// Manufacturer class interface

#include <sstream>
#include <iomanip>
#include "Manufacturer.h"

// Constructor
Manufacturer::Manufacturer(double p) : Company(p){
}

//   Add 0.75 to stock price
void Manufacturer::update(){
	double temp_p = Company::getPrice() + 0.75;
	Company::setPrice(temp_p);
}

// Returns string representation of Technology company
std::string Manufacturer::toString() const{
	std::ostringstream output;
	
	output << std::fixed << std::setprecision(2);
	output << "Manufacturer" << "\t" << Company::getPrice() << std::endl;
	
	return output.str();
}
