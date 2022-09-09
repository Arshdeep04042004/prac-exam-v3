main.cpp

#include "Bike_yard.h"

int main() {
	// Let's first make few Bikes on stack
	Bike b1(2, "Bike A", 100);
	Bike b2(1, "Bike b", 110);
	Bike b3(5, "Bike c", 120);
	Bike b4(4, "Bike d", 130);
	Bike b5(2, "Bike e", 140);
	Bike b6(2, "Bike f", 150);
	Bike b7(3, "Bike g", 160);
	
	// Let's create a bike yard
	Bike_yard yard(7); // giving initial 7 capacity

	// checking few methods without adding any bike
	cout << "Total cars in yard just after initialization: " << yard.get_total_stock_count() << '\n'; // should give us 0

	// adding bike
	yard.add_stock(b1);
	yard.add_stock(b2);
	yard.add_stock(b3);
	yard.add_stock(b4);
	yard.add_stock(b5);
	yard.add_stock(b6);
	yard.add_stock(b7);


	// checking methods
	cout << "Total bikes in yard: " << yard.get_total_stock_count() << '\n'; // all stocks in yard
	cout << "Total bikes in yard with car code 2: " << yard.get_stock_quantity(2) << '\n'; // all stock of bike_code = 2
	cout << "----------------------------------------------------------\n";
	// Now our capacity should be filled, let's try adding one more Bike
	Bike b8(7, "Bike g", 160);
	cout << "Adding 8th bike in yard with capacity " << yard.get_capacity() << '\n';
	cout << yard.add_stock(b8) << '\n';

	// Now let's get the yard capacity and total bikes and loop through to print all bikes
	int stock_size = yard.get_total_stock_count();
	Bike* bikes = yard.get_current_stock_list();

	cout << "----------------------------------------------------------\n";
	for (int i = 0; i < stock_size; ++i) {
		Bike b = cars[i];
		b.display(); // calling display on every bike
	}
}