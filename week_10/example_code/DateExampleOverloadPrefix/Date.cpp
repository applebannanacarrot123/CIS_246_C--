#include <iostream>
#include <string>
#include "Date.h"
using namespace std;


//Functions, since this is the implementation file
   
//Default constructor - needed because we wrote
//a 3-parameter constructor below.
Date::Date(){}

//Constructor with three parameters
Date::Date(int mm, int dd, int yy) {
	setDate(mm, dd, yy);
}

//Overloaded addition operator +
//This returns a Date object by value (copy)
Date Date::operator+(const int numOfDays) {
   Date date;
   date.setDate(month, day + numOfDays, year);
   return date;
}

//Overloaded unary prefix operator ++
//No argument specified (addition of 1 is implied)
//Returns a Date object by reference
Date& Date::operator++() {
	setDay(getDay() + 1);
	return *this;
}

//Overloaded unary postfix operator ++
//Argument is a "dummy" int value, to distinguish
//	between pre- and postfix
//Returns a Date object by reference.
Date& Date::operator++(int i=0) {
	setDay(getDay() + 1);
	return *this;
}

void Date::setDate(int mm, int dd, int yy) {
	month = mm;
	day = dd;
	year = yy;
}

void Date::setDay(int dd) {
	day = dd;
}

int Date::getDay() const {
	return day;
}

int Date::getMonth() const {
	return month;
}

int Date::getYear() const {
	return year;
}
