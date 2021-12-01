#include <iostream>
#include <cmath>

//http://www.cplusplus.com/reference/cmath/

using namespace std;

int main (void) {
	
	cout << "Square root of 9 is " << sqrt(9) << endl; //math library function
	
	cout << "log(10.0) is " << log(10.0) << endl; //math library function
	
	if (isgreater(log(10.0),0))  //math library function
		cout << "log(10.0) is positive" << endl;
	else
		cout << "log(10.0) is not positive" << endl;
	
	return 0;
}


