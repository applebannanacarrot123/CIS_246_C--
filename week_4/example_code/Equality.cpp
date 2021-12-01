//Equality.cpp - demonstrates problems resulting from confusing equality and assignment operators

#include <iostream>
using namespace std;

int main() {
	int x;

	cout << "Type a number other than 7: ";
	cin >> x;
	
	//Using assignment where equality is required
	while (x = 7) {
		cout << "Number must not be 7." << endl << endl;
		cout << "Type a number other than 7: ";
		cin >> x;
	}
	
	//Using assignment where equality is required, using the 
	//7 on the left of the assignment operator.
	//This will not compile, and makes the error noticeable.
//	while (7 = x) {
//		cout << "Number must not be 7." << endl << endl;
//		cout << "Type a number other than 7: ";
//		cin >> x;
//	}
	
	cout << endl << "Number is " << x << endl;
}
