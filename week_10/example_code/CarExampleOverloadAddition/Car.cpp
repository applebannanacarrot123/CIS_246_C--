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
