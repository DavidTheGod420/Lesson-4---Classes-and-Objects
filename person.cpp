/*
Name: david 
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
/*
Reflection:
1. What I understood:
 I understood how the copy constructor creates a new object and file while using commands in previous file
2. Difficulties:
 I initially struggled with understanding how 2 files can be dependent on eachother while using a constructor
3. Research:
 I searched online about different constructors and their purposes
4. AI Usage:
 used google ai search to narrow down a simple definition.
5. What I learned:
 learned how contructors allow 2 files to work with each other.
*/
