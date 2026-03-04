/*
Name: David 
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
void startEngine() {// Code to start the car's engine
std::cout<<"start engine"<<std::endl;
}
void accelerate() {// Code to accelerate the car
std::cout<<"accelerate engine"<<std::endl;
}
};

#include "Car.h"
int main(){
Car car1;
car1.startEngine();
car1.accelerate();
}
/*
Reflection:
1. What I understood:
 I understood how the code runs a projection of a car starting
2. Difficulties:
 I initially struggled with understanding when the car runs and accelerates 
3. Research:
 I searched online about the difference between engine start and acceleration 
4. AI Usage:
 didnt use ai for this
5. What I learned:
i learned how to make a code for a car and how to code specific parts for the car like the engine and acceleration.
*/
