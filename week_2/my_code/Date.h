// David Kovalev
// Program 2 
// Program that uses a class (Date) and driver (DateDriver) to display the date to the screen 


class Date{
	private:
		int day{0};
		int month{0};
		int year{0};
	public:
		// Constructor with the 3 required parameters
		Date(int m, int d, int y) :month{m}, day{d}, year{y}{
		}
		
		int getDay() const{
			return day;
		}
		
		void setDay(int d){
			day = d;
		}
		
		int getMonth() const{
			return month;
		}
		
		void setMonth(int m){
			month = m;
		}
		
		int getYear() const{
			return year;
		}
		
		void setYear(int y){
			year = y;
		}
		
		void displayDate() const{
			printf("Date is %d/%d/%d\n", month, day, year);
		}
		
}; // end Date class

