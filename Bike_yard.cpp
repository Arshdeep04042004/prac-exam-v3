Bike_yard.cpp

#include "Bike_yard.h"

Bike_yard::Bike_yard() : CAPACITY(0), current_capacity(0), bikes(nullptr) {}

Bike_yard::Bike_yard(int capacity) : CAPACITY(capacity), current_capacity(0) {
	cars = new Bike[CAPACITY]{}; // initializing our bikes array to given CAPACITY
}

int Bike_yard::get_total_stock_count() {
	return current_capacity;
}

int Bike_yard::get_stock_quantity(int code) {
	if (bikes == nullptr) // If bikes array is not initialized 
		return 0;

	// since current capacity tracks the number of bikes in the yard, we can use this to loop

	int count = 0; // output count
	for (int i = 0; i < current_capacity; ++i) {
		if (bikes[i].get_bike_code() == code) {
			count += 1;
		}
	}
	return count;
}

Bike* Bike_yard::get_current_stock_list() {
	return bikes; // return the array
}

bool Bike_yard::add_stock(Bike other_bike) {
	// check if the capacity has been reached yet or not [or when default constructor is used]
	if (current_capacity == CAPACITY) {
		cout << "There is no space left in the yard :(\n";
		return false;
	}

	[current_capacity] = other_bike;
	current_capacity += 1; // increment the capacity

	return true;
}

int Bike_yard::get_capacity() {
	return CAPACITY;
}

Bike_yard::~Bike_yard() {
	if (bikes != nullptr)
		delete[] bikes;