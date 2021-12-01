// David Kovalev
// Program 1
// A program that prompts the user for some data, saves the data, and prints the data. 

#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	int userNumIn;
	
	std::cout << "Type in a number: ";
	std::cin >> userNumIn;
	std::cout << "The number you typed is " << userNumIn << std::endl;
	
	return 0;
}
