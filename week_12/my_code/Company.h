// David Kovalev
// Week 12 Homework
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
		
		// Update virtual function
		virtual void update(){
		}
		
		// String representation of company
		virtual std::string toString() const;
		
	protected:
		// Sets the price of the company
		void setPrice(double price);
		
	private:
		double price;
};

#endif
