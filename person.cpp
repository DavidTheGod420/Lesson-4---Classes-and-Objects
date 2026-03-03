/*
Name: John Doe
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/15/2026
*/
class Person {
public:
std::string name{"Maksi"};
int age{29};
char gender{'M'};
public:
void introduce() {
std::cout << "Hello, I'm " << name << ". I'm " << age << " years old.";
if (gender == 'M’) { std::cout << " I'm a male." << std::endl;
} else if (gender == 'F’) { std::cout << " I'm a female." << std::endl;
} else { std::cout << " Gender unspecified." << std::endl;
}
}
};
Classes
#include "Person.h"
int main(){
Person person1;
person1.introduce();
}
