// David Kovalev
// Week 12 Homework
// Technology class interface

#include <sstream>
#include <iomanip>
#include "Technology.h"

// Constructor
Technology::Technology(double p) : Company(p){
}

//   Subtract 1.01 from stock price
void Technology::update(){
	double temp_p = Company::getPrice() - 1.01;
	Company::setPrice(temp_p);
}

// Returns string representation of Technology company
std::string Technology::toString() const{
	std::ostringstream output;
	
	output << std::fixed << std::setprecision(2);
	output << "Technology:" << std::setw(10) << "$" << Company::getPrice() << std::endl;
	
	return output.str();
}
