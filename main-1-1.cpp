#include <iostream>
#include <string>
#ifndef Bike_H
#define Bike_H

class Bike {
public:
Bike();                             // default constructor - makes new bike with code number 0 and
                                    // and empty string "" for brand

Bike(std::string brand, int code);  // constructor taking string representing brand
                                    // and integer representing code for that brand

std::string get_brand();            // returns the brand of the bike
int get_code();                     // returns the brand code number of bike
~Bike();                            // destructor
};
#endif





#include <iostream>
#include <string>
int main(){
Bike *first, *second;
first = new Bike(5, "Bike 3");
second = new Bike(6, "Bike 2");
first->get_value();
first->get_brand_type();
second->get_value();
second->get_brand_type();
	
}
