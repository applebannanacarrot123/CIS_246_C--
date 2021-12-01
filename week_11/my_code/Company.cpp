// David Kovalev
// Week 11 Homework
// Company class interface


#include <sstream>
#include <iomanip>
#include "Company.h"

// Constructor
Company::Company(double p){
	Company::setPrice(p);
}

double Company::getPrice() const{
	return price;
}

// Sets price
void Company::setPrice(double p){
	price = p;
}

// Returns a company representation as a string
std::string Company::toString() const{
	std::ostringstream output;
	
	output << "$" << std::fixed << std::setprecision(2) << getPrice() << std::endl;
	
	return output.str();
}
