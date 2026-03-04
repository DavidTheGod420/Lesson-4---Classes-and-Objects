/*
Name: david 
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
~Car(){// Destructor
std::cout<<"Object is destroyed"<<std::endl;
}
void startEngine() {
// Code to start the car's engine
std::cout<<"start engine"<<"{brand:"<<brand<<"|
model:"<<model<<"}"<<std::endl;
}
};
Destructors
#include "Car.h"
int main(){
// default constructor
Car car1;
// parametrized constructor
Car car2("Tesla","X", 2022);
//copy Constructor
Car car3(car2);
car1.startEngine();
car2.startEngine();
car3.startEngine();
//Destructor will be automatically called when car1, car2 and car3 goes out of
scope
return 0;
/*
Reflection:
1. What I understood:
 i understood the destructor destroys previous obejct and just releases information while closing up previous file.
2. Difficulties:
 i intially struggled understanding what a destructor does and why it does.
3. Research:
 I searched online about what a destructor is and examples of them
4. AI Usage:
 i used google ai search to get a simple understanding of a destructor
5. What I learned:
 I learned how a destructor cleans up operations and spits out information.
*/
