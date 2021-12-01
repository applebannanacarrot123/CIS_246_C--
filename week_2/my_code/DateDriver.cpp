// David Kovalev
// Program 2 
// Program that uses a class (Date) and driver (DateDriver) to display the date to the screen 


#include <iostream>
#include "Date.h"

using namespace std;

int main(int argc, char** argv) {
	// Initialize and display date
	Date d_object{7, 31, 2021};
	d_object.displayDate();
	
	// Receive input and set dates
	printf("New month: ");
	int newnumber;
	cin >> newnumber;
	d_object.setMonth(newnumber);
	
	printf("New day: ");
	cin >> newnumber;
	d_object.setDay(newnumber);
	
	printf("New year: ");
	cin >> newnumber;
	d_object.setYear(newnumber);
	
	
	// Display new date
	d_object.displayDate();
	
	system("pause");
	return 0;
}
