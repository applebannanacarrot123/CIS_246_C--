#include <iostream>
#include <string>

using namespace std;

void month(int m);
void month(string m);

int main() {
	month(1);
	month("Jan");
	
}

void month(int m) {
	cout << "In month that takes an int" << endl;
	if (m == 1)
		cout << "January" << endl;
}

void month(string m) {
	cout << "In month that takes a string" << endl;
	if (m == "Jan")
		cout << "January" << endl;
}
