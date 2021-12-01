// David Kovalev
// Week 11 Homework
// Company base class

// Include guard
#ifndef Company_h
#define Company_h

#include <string>

class Company{
	public:
		// Constructor
		Company(double price);
		
		// Return stock price
		double getPrice() const;
		
		// String representation of company		
		std::string toString() const;
		
	protected:
		// Sets the price of the company
		void setPrice(double price);
		
	private:
		double price;
};

#endif
