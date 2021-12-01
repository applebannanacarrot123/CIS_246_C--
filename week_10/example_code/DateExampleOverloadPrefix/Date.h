#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Date {
   
public:
   
	//Protoypes, since this is the header file
	
	//Constructors
	Date();					// default
	Date(int m, int, int);	//3 arguments
	
	//sets and gets
	void setDate(int,int,int);
	void setDay(int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	
	//overloaded + operator function
	Date operator+(const int);
	
	//overloaded prefix ++ operator function
	Date& operator++();

	//overloaded prefix ++ operator function
	Date& operator++(int);
   
private:
	int month;
	int day;
	int year;
};

#endif
