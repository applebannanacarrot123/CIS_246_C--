// David Kovalev
// Week 4
// Product class

class Product {
	// Data member
	private:
		double product_price;
		double total_sales;
	
	public:
		// Constructor
		Product(double price): product_price{price}{}
		
		// Update total sales
		void updateTotalSales(int sold){
			double current_sale = getProductPrice() * sold;
			double previous_total = getTotalSales();
			
			setTotalSales(previous_total + current_sale);
		}
		
		// Getter and setters
		double getProductPrice() const {
			return product_price;
		}
		
		void setProductPrice(double p){
			product_price = p;
		}
		
		double getTotalSales() const {
			return total_sales;
		}
		
		void setTotalSales(double sales){
			total_sales = sales;
		}
		
};
