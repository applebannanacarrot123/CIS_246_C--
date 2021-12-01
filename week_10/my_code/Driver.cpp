// David Kovalev
// Week 10 homework
// Driver for homework 10 (remake of homework 8 using a "Team" object to store players)

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include "Team.h"
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
	
	Team user_team = Team();
	
	user_team += p_1;
	user_team += p_2;
	user_team += p_3;
	
	user_team.print();
	
	return 0;
}
