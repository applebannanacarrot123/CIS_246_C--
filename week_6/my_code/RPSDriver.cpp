// David Kovalev
// Homework week 6
// Driver for RPS game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Player.h"

using namespace std;

int main(int argc, char** argv) {
	Player user;
	Player computer;
	
	string user_input;
	
	// User prompt
	cout << "Welcome to Rock Paper Scissors" << endl << endl;
	cout << "Type rock, paper, or scissors: ";
	
	// Get user input and set play to player class
	cin >> user_input;
	user.setPlay(user_input);

	// Randomize and set play for computer
	srand(user.play);
	int computer_play = 1 + rand() % 3;
	computer.setPlay(computer_play);
		
	// Tell user what was played
	cout << endl << "You played: " << user.getPlay() << endl;
	cout << "Computer Played: " << computer.getPlay() << endl;
	
	// Winner logic
	// Tie
	if(user.getPlay() == computer.getPlay()){
		cout << "It's a tie." << endl;
	}
	// Computer has rock, user has scissors
	else if(computer.play == 1 && user.play == 3){
		cout << "Computer has won." << endl;
	}
	// Computer has scissors, user has paper
	else if(computer.play == 3 && user.play == 2){
		cout << "Computer has won." << endl;
	}
	// Computer has paper, user has rock
	else if(computer.play == 2 && user.play == 1){
		cout << "Computer has won." << endl;
	}
	// If not a tie && computer hasnt won then the player won
	else{
		cout << "You have won." << endl;
	}
	
	return 0;
}
