#include <iostream>
#include "Date.h"

using namespace std;

int main(int argc, char** argv) {
	
	//Create Date object
	Date today(1,1,2020);
	
	cout << "Today is " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << endl << endl;
	
	//Use overloaded addition operator
	today = today + 4;
	cout << "Today (after adding 4) is " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << endl << endl;
	
	//Use the overloaded unary prefix operator ++
	++today;
	cout << "Today (after prefix update) is " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << endl << endl;
	
	//Use the overloaded unary postfix operator ++
	today++;
	cout << "Today (after postfix update) is " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << endl << endl;
	
	return 0;
}
