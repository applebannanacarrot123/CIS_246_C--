// David Kovalev
// Homework week 6
// Player class for rock paper scissors game

#include <string>

using namespace std;

class Player{
	public:
		// 1 = rock, 2 = paper, 3 = scissors
		int play;
		
		// Returns string representation of play integer
		string getPlay(void) const {
			switch(play){
				case 1:
					return "rock";
				case 2:
					return "paper";
				case 3:
					return "scissors";	
			}
		}
		
		// Sets play value through a string parameter
		void setPlay(string s){
			if(s.compare("rock") == 0){
				play = 1;
			}
			else if(s.compare("paper") == 0){
				play = 2;				
			}
			else if(s.compare("scissors") == 0){
				play = 3;
			}
		}
		
		// Sets play value through an int parameter
		void setPlay(int i){
			play = i;
		}
};
