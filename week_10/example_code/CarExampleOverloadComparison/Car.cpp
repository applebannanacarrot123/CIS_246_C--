#include <iostream>
#include <string>
#include "Car.h"
using namespace std;


//Functions, since this is the implementation file
   
//Default constructor - needed because we wrote
//a 2-parameter constructor below.
Car::Car(){}

//Constructor with two parameters
Car::Car(int pr, string bodySt) {
	setCar(pr, bodySt);
}

//Overloaded addition operator +
//This returns a Car object by value (copy)
Car Car::operator+(const int additionalDollars) {
   //Car car;
   //car.setCar(price + additionalDollars, bodyStyle);
   
   Car car(price + additionalDollars, bodyStyle);
   return car;
}

//overloaded < operator function
//This returns a bool by value (copy)
bool Car::operator<( const Car& car2 ) const {
	//getPrice() gets the price in the current object (operand 1)
	//car2 is the argument, which is operand 2
	if (getPrice() < car2.getPrice())
		return true;
	else
		return false;
}

void Car::setCar(int pr, string bodySt) {
	setPrice(pr);
	setBodyStyle(bodySt);
}

void Car::setPrice(int pp) {
	price = pp;
}

void Car::setBodyStyle(string body){
	bodyStyle = body;
}

int Car::getPrice() const {
	return price;
}

string Car::getBodyStyle() const {
	return bodyStyle;
}
