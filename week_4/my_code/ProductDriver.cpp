// David Kovalev
// Homework week 4
// Driver program that accepts and calculates sales for the Product class 


#include <iostream>
#include <iomanip>
#include "Product.h"


using namespace std;

int main(int argc, char** argv) {
	// initialize products
	Product prod_1{2.98};
	Product prod_2{4.50};
	Product prod_3{9.98};
	Product prod_4{4.29};
	Product prod_5{8.67};
	
	// initialize data to send to products
	int product_num = 0;
	int quantity_sold = 0;
	
	// initial ask
	cout << "Product number: ";
	cin >> product_num;
	
	while (product_num != 0){
		cout << "Quantity sold: ";
		cin >> quantity_sold;
		
		switch (product_num){
			case 1:
				prod_1.updateTotalSales(quantity_sold);
				break;
			case 2:
				prod_2.updateTotalSales(quantity_sold);
				break;
			case 3:
				prod_3.updateTotalSales(quantity_sold);
				break;
			case 4:
				prod_4.updateTotalSales(quantity_sold);
				break;
			case 5:
				prod_5.updateTotalSales(quantity_sold);
				break;
		}
		
		cout << "Product number: ";
		cin >> product_num;
	}
	
	cout << fixed << setprecision(2);
	cout << endl << "Total Sales" << endl << "===========" << endl;
	cout << "Product 1: $";
	cout << setw(10) << prod_1.getTotalSales() << endl;
	
	cout << setw(0);
	cout << "Product 2: $";
	cout << setw(10) << prod_2.getTotalSales() << endl;
	
	cout << setw(0);
	cout << "Product 3: $";
	cout << setw(10) << prod_3.getTotalSales() << endl;
	
	cout << setw(0);
	cout << "Product 4: $";
	cout << setw(10) << prod_4.getTotalSales() << endl;
	
	cout << setw(0);
	cout << "Product 5: $";
	cout << setw(10) << prod_5.getTotalSales() << endl;
	
	
	return 0;
}
