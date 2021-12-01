// David Kovalev
// Week 10 Homework
// Team class for holding players

// Include guard
#ifndef Team_h
#define Team_h

#include <vector>
#include "Player.h"

class Team{
	public:
		// Constructor
		Team();
		
		// Print function
		void print();
		
		// Overloaded +=
		Team& operator+=(Player&);
		
	private:
		// Player vector
		std::vector<Player> player_vector;
};

#endif
