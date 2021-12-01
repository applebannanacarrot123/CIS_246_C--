#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	
	double num1 = 14.234;
	double num2 = 18.673;
	double sum = num1 + num2;
	
	cout << setw(8) << num1 << endl;
	cout << "+" << setw(7) << num2 << endl;
	cout << "--------" << endl;
	cout << setw(8) << sum;
	
}
