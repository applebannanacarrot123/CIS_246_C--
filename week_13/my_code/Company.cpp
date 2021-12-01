// David Kovalev
// Week 12 Homework
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

std::string Company::toString() const{
	// Virtual function
}
