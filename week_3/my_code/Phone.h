// David Kovalev
// Week 3 homework
// Phone class for the jjc bookstore problem

class Phone{
	// Data members
	private:
		double phone_price;
		bool is_iphone;
		int applecare_years;
	
	public:
	// Constructor with all 3 parameters
	Phone(double price, bool iphone, int ac_years): phone_price{price}, is_iphone{iphone}, applecare_years{ac_years}  {
	}
	
	// Returns total phone price
	double getTotalPurchase(){
		double subtotal = getPrice();
		
		// handles iphone purchases
		if(getIsIphone()){
			int ac_years = getAcYears();
			float ac_percent = ac_years > 1 ? 0.10 : 0.12;
			float ac_price = ac_percent * getPrice() * ac_years;
			
			subtotal = subtotal + ac_price;
		}
		
		// 5% sales tax
		subtotal = subtotal * 1.05;
		
		return subtotal;
	}
	
	// GETTER & SETTERS
	// phone_price
	double getPrice() const {
		return phone_price;
	}
	void setPrice(double p){
		phone_price = p;
	}
	
	// is_iphone
	bool getIsIphone() const {
		return is_iphone;
	}
	void setIsIphone(bool iphone) {
		is_iphone = iphone;
	}
	
	// applecare_years
	int getAcYears() const {
		return applecare_years;
	}
	void setAcYears(int ac) {
		applecare_years = ac;
	}
};
