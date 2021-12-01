#include <iostream>
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Lion.h"

using namespace std;

int main(int argc, char** argv) {
	
	cout << "Base object referenced with Base variable" << endl;
	Animal animal;
	animal.move();
	
	cout << endl << "Base object referenced with Base pointer" << endl;
	Animal * aPtr;
	aPtr = &animal;
	aPtr->move();
	
	cout << endl << "Derived object referenced with Derived variable" << endl;
	Fish fish;
	fish.move();
	
	cout << endl << "Derived object referenced with Derived pointer" << endl;
	Fish * fPtr;
	fPtr = &fish;
	fPtr->move();
	
	cout << endl << "Derived object referenced with Base pointer" << endl;
	aPtr = &fish;
	aPtr->move();
	
//	Fish fish;
//	Lion lion;
//	Bird bird;
//	
//	Animal * zoo[3];
//	zoo[0] = &fish;
//	zoo[1] = &lion;
//	zoo[2] = &bird;
//	
//	for (int i =0; i < 3; i++)
//		zoo[i]->move();
	
	
	return 0;
}
