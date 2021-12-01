// David Kovalev
// Week 13 Homework
// Application that demonstrates polymorphism using information about companies from a file.
//
// This version does not include the $ before the price because outputting the data to a file
// with the $ attached to the price would not allow it to be read correctly by the program
// if that file was used as input afterwards.
// This reason is also why setwidth is not used for pretty printing. Instead, a tab character is used.

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Manufacturer.h"
#include "Technology.h"

using namespace std;

int main(int argc, char** argv) {
	Company * ptrs[20];
	
	cout << "Original portfolio:" << endl;
	
	// Input file
	ifstream input_file{"Week13SampleDataFile.txt", ios::in};
	if(!input_file) {
    	cerr << "File could not be opened" << endl;
    	exit(EXIT_FAILURE);
	}
	
	// Loop 1 (Reading input)
	for(int i = 0; i < 20; i ++){
		// Read company type
		char company_type[20];
		input_file >> company_type;
		// Read company price
		double price;
		input_file >> price;
		
		if(company_type[0] == 'T'){
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
	input_file.close();
	
	
	cout << endl << "Updated portfolio:" << endl;
	
	// Output file
	ofstream output_file{"Week13SampleDataOutputFile.txt", ios::out};
	if(!output_file){
    	cerr << "File could not be opened" << endl;
    	exit(EXIT_FAILURE);
	}
	
	// Loop 2 (Updating and writing to file)
	for(int i = 0; i < 20; i ++){
		ptrs[i]->update();
		cout << ptrs[i]->toString();
		output_file << ptrs[i]->toString();
	}
	output_file.close();
	
	return 0;
}
