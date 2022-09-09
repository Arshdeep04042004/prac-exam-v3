
#include <iostream>
#include <string>

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





Bike::Bike(){
	valueA = 0;
	A = "";brand	
}

Bike::Bike(std::string brand, int code){
	valueA=value;
	brandA = product_type;
}

std::string Bike::get_brand_type(){
//std::cout << brandA << std::endl;
return productA;
}	

int Bike::get_value(){
	//std::cout << valueA << std::endl;
	return valueA;
}

Bike::~Bike(){
}
