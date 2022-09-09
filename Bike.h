#include <iostream>
#include <string>
#ifndef Bike_H
#define Bike_H

class Bike {
public:
Bike();                             // default constructor - makes new bike with code number 0 and
                                    // and empty string "" for brand

Bike(std::string brand, int code);
int valueA;
std::string brandA;
std::string get_brand();            // returns the brand of the bike
int get_code();                     // returns the brand code number of bike
~Bike();                            // destructor
};
#endif

