//Print the numbers 1 through 10, ascending
//Step 1 – Set up a regular loop, and identify its components
//Step 2 – Write a recursive version using the same components
#include <iostream>

using namespace std;

void recursivePrint(int number);
void recursivePrintBackwards(int number);
void recursivePrintEvens(int number);

int main() {
	
	
//	for (int number = 1; number <= 10; number++) { 
//		cout << number << endl;
//	}
//	
//	int number{1};
//	while (number <= 10) {
//		cout << number << endl;
//		number++;
//	}

	//recursivePrint(1);
	
//	int number{10};
//	while (number > 0) {
//		cout << number << endl;
//		number--;
//	}

//	recursivePrintBackwards(10);

//	int number{2};
//	while (number <= 50) {
//		cout << number << endl;
//		number += 2;
//	}
	
	recursivePrintEvens(2);
}

void recursivePrint(int number) {
	if (number > 10) //base case
		return;
	else {
		cout << number << endl;
		number++;
		recursivePrint(number);
	}
				
}

void recursivePrintBackwards(int number) {
	if (number == 0) //base case
		return;
	else {
		cout << number << endl;
		number--;
		recursivePrintBackwards(number);
	}
				
}

void recursivePrintEvens(int number) {
	if (number > 50) //base case
		return;
	else {
		cout << number << endl;
		number+=2;
		recursivePrintEvens(number);
	}
				
}
















