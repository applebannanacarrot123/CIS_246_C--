// David Kovalev
// Week 8 homework
// Player class for holding player info


// Include guard
#ifndef Player_h
#define Player_h

#include <string>

class Player{
	public:
		explicit Player(std::string = "Knight", int = 0);
		
		// Getters
		std::string getClass() const;
		int getLevel() const;
		
		// Setters
		void setClass(std::string s);
		void setLevel(int i);
		
	private:
		std::string player_class;
		int level;
};

#endif
