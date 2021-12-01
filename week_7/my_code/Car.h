// David Kovalev
// Week 7
// Car class for inventory driver

using namespace std;

class Car{
	public:
		// Data members
		string car_make;
		int price;
		
		// 2-arg Constructor
		Car(string make, int cost){
			car_make = make;
			price = cost;
		}
		
		// Getters
		string getMake() const{
			return car_make;
		}
		
		int getPrice() const{
			return price;
		}
};
