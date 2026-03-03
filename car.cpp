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
