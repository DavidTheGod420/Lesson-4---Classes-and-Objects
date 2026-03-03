/*
Name: John Doe
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/15/2026
*/
class Car {
private:
std::string brand{"Volkswagen"};
std::string model="Polo";
int year {2012};
public:
Car(){// Default constructor
}
Car(std::string b, std::string m, int y){// Parameterized Constructor
brand = b; model = m; year = y;
}
Car(const Car & other){// Copy Constructor
brand = other.brand; model = other.model; year = other.year;
}
};
Constructors
#include "Car.h"
int main(){
Car car1; // default constructor
Car car2("Tesla","X", 2022); // parametrized constructor
Car car3(car2); //copy Constructor
Car* pCar1 = new Car; // default constructor
Car* pCar2 = new Car("Tesla","X", 2022); // parametrized constructor
Car car[20]; // default constructor
car1.startEngine();
car2.startEngine();
car3.startEngine();
pCar1->startEngine();
pCar2->startEngine();
car[0].startEngine();
return 0; }
