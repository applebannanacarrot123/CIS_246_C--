// David Kovalev
// Week 12 Homework
// Application that demonstrates polymorphism using information about companies

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Manufacturer.h"
#include "Technology.h"

using namespace std;

int main(int argc, char** argv) {
	Company * ptrs[20];
	srand(15);
	
	cout << "Original portfolio:" << endl;
	// Loop 1
	for(int i = 0; i < 20; i ++){
		double price = i * 0.11 + 1.00;
		
		if(rand() % 2 == 0){
			Technology * ptr = new Technology {price};
			ptrs[i] = ptr;
			cout << ptrs[i]->toString();
		}
		
		else{
			Manufacturer * ptr = new Manufacturer {price};
			ptrs[i] = ptr;
			cout << ptrs[i]->toString();
		}
	}
	
	cout << endl << "Updated portfolio:" << endl;
	// Loop 2
	for(int i = 0; i < 20; i ++){
		ptrs[i]->update();
		cout << ptrs[i]->toString();
	}
	
	return 0;
}
