// David Kovalev
// Week 11 Homework
// Application that demonstrates inheritance using stock information about companies

#include <cstdlib>
#include <iostream>
#include <string>
#include "Manufacturer.h"
#include "Technology.h"

using namespace std;

int main(int argc, char** argv) {
	for(int i = 0; i < 20; i ++){
		srand(i);
		
		if(rand() % 2 == 0){
			Technology c{i * 0.11 + 1};
			cout << c.toString();
		}
		
		else{
			Manufacturer c{i * 0.11 + 1};
			
			cout << c.toString();
		}
	}
	
	return 0;
}
