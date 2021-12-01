#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int x{25};
	int y{10};
	//double z{static_cast<double>(x) / y};
	double z = x / y;

	cout << fixed << setprecision(1) << z;



}
