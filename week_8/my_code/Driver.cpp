// David Kovalev
// Week 8 homework
// Driver for application that creates player objects that could be used in a role-playing game. 

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Player.h"

using namespace std;

int main(int argc, char** argv) {
	// 1st Prompt
	string p_1_class;
	int p_1_level;
	
	cout << "Enter player 1 class: ";
	cin >> p_1_class;
	cout << "Enter player 1 level: ";
	cin >> p_1_level;
	
	// 2nd Prompt
	string p_2_class;
	
	cout << "Enter player 2 class: ";
	cin >> p_2_class;
	
	// Create classes
	Player p_1 = Player(p_1_class, p_1_level);
	Player p_2 = Player(p_2_class);
	Player p_3 = Player();
	
	cout << endl << "Your team:" << endl;
	cout << "Player 1: " << setw(15) << left << p_1.getClass() << right << setw(5) << "Level: " << p_1.getLevel() << endl;
	cout << "Player 2: " << setw(15) << left << p_2.getClass() << right << setw(5) << "Level: " << p_2.getLevel() << endl;
	cout << "Player 3: " << setw(15) << left << p_3.getClass() << right << setw(5) << "Level: " << p_3.getLevel() << endl;	
	
	return 0;
}
