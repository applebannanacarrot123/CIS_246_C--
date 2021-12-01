// David Kovalev
// Week 3 homework
// Driver program for the phone class, calculates price of phone includeing iphone apple care


#include <iostream>
#include <iomanip>
#include "Phone.h"

using namespace std;

int main(int argc, char** argv) {
	// Declare data members
	double phone_price;
	bool is_iphone = false;
	char user_is_iphone;
	int ac_years = 0;
	
	// Phone user_phone{price, isiphone, acyears};
	
	// Get input
	cout << "Enter the price of the phone > ";
	cin >> phone_price;
	
	cout << "Is the phone an iPhone (Y/N)? > ";
	cin >> user_is_iphone;
	
	// Handle apple care
	if(user_is_iphone == 'Y' || user_is_iphone == 'y'){
		is_iphone = true;
		
		cout << "Enter the number of years of AppleCare > ";
		cin >> ac_years;
		
		// If number entered is less than required apple care amount
		if(ac_years < 1){
			ac_years = 1;
		}
	}
	
	// Create and use Phone class object
	Phone user_phone{phone_price, is_iphone, ac_years};
	
	// Formatted output
	cout << fixed << setprecision(2);
	
	cout << setw(25) << left << endl << "Price of phone";
	cout << "$" << setw(7) << user_phone.getPrice() << endl;
	
	cout << setw(25) << "Total puchase";
	cout << "$" << setw(7) << user_phone.getTotalPurchase() << endl;
	
	return 0;
}
