// David Kovalev
// Homework #5
// Driver for overloaded average function in "Average.h", prompts user and calculates average of given numbers


#include <iostream>
#include <iomanip>
#include "Average.h"

using namespace std;


int main(int argc, char** argv) {
	// Var to hold the average after calculation
	double average;
	
	// Integer variables
	int int1 {0};
	int int2 {0};
	int int3 {0};
	
	// Double variables
	double dub1 {0};
	double dub2 {0};
	double dub3 {0};
	
	
	cout << setprecision(10); // Set precision for double output
	
	// 2 ints
	cout << "Enter 2 integers, separated by a space, on a single line: ";
	cin >> int1;
	cin >> int2;
	average = computeAverage(int1, int2);
	cout << "Average of " << int1 << " and " << int2 << " is " << average << endl << endl;
	
	// 3 ints
	cout << "Enter 3 integers, separated by a space, on a single line: ";
	cin >> int1;
	cin >> int2;
	cin >> int3;
	average = computeAverage(int1, int2, int3);
	cout << "Average of " << int1 << " and " << int2 << " and " << int3 << " is " << average << endl << endl;
	
	// 2 doubles
	cout << "Enter 2 doubles, separated by a space, on a single line: ";
	cin >> dub1;
	cin >> dub2;
	average = computeAverage(dub1, dub2);
	cout << "Average of " << dub1 << " and " << dub2 << " is " << average << endl << endl;
	
	// 3 doubles
	cout << "Enter 3 doubles, separated by a space, on a single line: ";
	cin >> dub1;
	cin >> dub2;
	cin >> dub3;
	average = computeAverage(dub1, dub2, dub3);
	cout << "Average of " << dub1 << " and " << dub2 << " and " << dub3 << " is " << average << endl << endl;
	
	return 0;
}
