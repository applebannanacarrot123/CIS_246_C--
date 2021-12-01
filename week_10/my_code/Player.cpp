// David Kovalev
// Week 8 homework
// Player interface implementation 


#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

// Constructor
Player::Player(string player_role, int player_level){
	setClass(player_role);
	setLevel(player_level);
}


// Set the player class
void Player::setClass(string s){
	player_class = s;
}

// Set the player level
void Player::setLevel(int i){
	level = i;
}

// Get the player class
string Player::getClass() const{
	return player_class;
}

// Get the player level
int Player::getLevel() const{
	return level;
}

