#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Frog.h"
#include "Fish.h"
#include "Shark.h"

using namespace std;

int main(int argc, char** argv) {


	Animal animal;
//	animal.move();
//
	Bird bird;
//	bird.move();
//	
	Frog frog;
//	frog.move();
//	
//	cout << "Base pointer pointing at base object" << endl;
//	Animal * aPtr;
//	aPtr = &animal;
//	aPtr->move();
//	
//	cout << "Derived class pointer pointing at derived class object" << endl;
//	Bird * birdPtr;
//	birdPtr = &bird;
//	birdPtr->move();
//	
//	//birdPtr = &animal;
//	
//	cout << "base class pointer pointing at derived class object" << endl;
	//static binding (evaluated at compile time)
	Animal * animalPtr;
	animalPtr = &bird;
//	animalPtr->move();
//	//animalPtr->layEgg(); error; layEgg doesn;t exist in Animal
	Fish fish;
	Shark shark;
	
	//static binding (evaluated at compile time)
	int * x;
	x = &fish;
	
	Animal * zoo[3];
	//for loop that randomly created objects
	zoo[0] = &frog;
	zoo[1] = &bird;
	zoo[2] = &shark;
	
	cout << "Loop through array - still base class pointers pointing at derived class objects" << endl;
	
	for (int i = 0 ; i < 3; i++)
		//evaluated at run-time - dynamic/late binding
		zoo[i]->move();
	
	return 0;
}









