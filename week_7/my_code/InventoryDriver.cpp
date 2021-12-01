// David Kovalev
// Homework week 7
// Program that manages an inventory of Car.h with a vector

#include <array>
#include <iostream>
#include <iomanip>
#include <vector>

#include "Car.h"

using namespace std;

int main(int argc, char** argv) {
	// Prototypes for functions
	void displayMenu();
	void addData(vector<Car>&);
	void deleteData(vector<Car>&);
	void printData(vector<Car>&);
	
	// main Data members
	vector<Car> car_inventory;
	int user_input = 0;
	
	cout << "Welcome to the JJC Car Dealership Inventory Program" << endl;
	
	// 4 is the exit option
	while(user_input != 4){
		if(user_input == 1){
			addData(car_inventory);
		}
		else if (user_input == 2){
			deleteData(car_inventory);
		}
		else if (user_input == 3){
			printData(car_inventory);
		}
		
		displayMenu();
		cin >> user_input;
	}	
	
	
	
	return 0;
}


//   Displays menu prompt to user
void displayMenu(){
	cout << endl << "1. Add a car to inventory" << endl;
	cout << "2. Delete a car from inventory" << endl;
	cout << "3. Print inventory" << endl;
	cout << "4. Exit" << endl << endl;
	cout << "Your choice:";	
}


//   Adds data to the car vector by prompting the user 
void addData(vector<Car>& cars){
	string car_type;
	int car_price;
	
	// Prompt user
	cout << "Type of car:";
	cin >> car_type;
	cout << "Price of car:";
	cin >> car_price;
	
	// Create car object
	Car user_car{car_type, car_price};
	
	cars.push_back(user_car);
}


//   Prompts user to enter a car and deletes matching data
void deleteData(vector<Car>& cars){
	string car_type;
	
	// Prompt user
	cout << "Type of car to delete: ";
	cin >> car_type;
	
	bool found = false;
	for(size_t i = 0; i < cars.size(); i++){
		if(car_type.compare(cars[i].getMake()) == 0){
			cars.erase(cars.begin() + i);
			
			cout << car_type << " deleted from inventory" << endl;
			found = true;
		}
	}
	
	if(found == false){
		cout << "No such car in inventory" << endl;
	}
}


//   Neatly prints out data
void printData(vector<Car>& cars){
	cout << setw(0) << "Make" << setw(33) << "Price" << endl;
	cout << setw(0) << "----" << setw(33) << "-----" << endl;
	
	for(Car c : cars){
		cout << left << setw(30) << c.getMake() << "$" << right << setw(6) << c.getPrice() << endl;
	}
}






















