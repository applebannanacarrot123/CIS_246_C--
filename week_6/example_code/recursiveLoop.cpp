#include <iostream>

using namespace std;

//prototype
static void recursiveNum (int n);

int main() {
	
	//Print Numbers 1 through 10, using recursion
	
	int num = 1; //initialize LCV num
	
//	while (num <= 10) {
//		cout << num << endl;
//		num++;
//	}
	
	recursiveNum(num);
	
}

static void recursiveNum (int n) {
	//version 1
	if (n <= 10) {
		cout << n << endl;
		n++;
		recursiveNum(n);
	}	
	
	//version 2
//	if (n > 10)
//		return;
//
//	cout << n << endl;
//	n++;
//	recursiveNum(n);
		
}
