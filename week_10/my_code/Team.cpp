// David Kovalev
// Week 10 Homework
// Team interface implementation

#include <iostream>
#include <iomanip>
#include <vector>

#include "Player.h"
#include "Team.h"

using namespace std;

// Constructor
Team::Team(){
}

// Print team function
void Team::print(){
	int index = 1;
	
	cout << endl << "Your team: " << player_vector.size() << endl;
	for(Player p : player_vector){
		cout << "Player " << index << ": " << setw(15) << left << p.getClass() << right << setw(5) << "Level: " << p.getLevel() << endl;
		index ++;
	}
}

// += Operator override
Team& Team::operator+=(Player& p){
	player_vector.push_back(p);	
	
	return *this;
}

