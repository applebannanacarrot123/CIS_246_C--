#include <iostream>
#include "Car.h"

using namespace std;

int main(int argc, char** argv) {
	
	//Create 2 Car objects
	Car car1(20000,"SUV");
	Car car2(15000,"sedan"); //{car1};  //use default copy constructor
	
	cout << "Original values:" << endl;
	cout << "car1 is a " << car1.getBodyStyle() << ", and its price is " << car1.getPrice() << endl;
	cout << "car2 is a " << car2.getBodyStyle() << ", and its price is " << car2.getPrice() << endl << endl;
	
	//Use the overloaded operator <
	if (car1 < car2)
		cout << "car1's price is less than car2's price" << endl << endl;
	else
		cout << "car1's price is greater than car2's price" << endl << endl;
		
	//Update the price of car1
	car1 = car1 + -10000;

	cout << "Updated values:" << endl;
	cout << "car1 is a " << car1.getBodyStyle() << ", and its price is " << car1.getPrice() << endl;
	cout << "car2 is a " << car2.getBodyStyle() << ", and its price is " << car2.getPrice() << endl << endl;
	
	//Use the overloaded operator <
	if (car1 < car2)
		cout << "car1's price is less than car2's price" << endl << endl;
	else
		cout << "car1's price is greater than car2's price" << endl << endl;
		
	return 0;
}
