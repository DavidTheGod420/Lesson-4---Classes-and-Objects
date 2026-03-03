/*
Name: John Doe
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
Date: 02/15/2026
*/
class BankAccount {
private:
double balance;
public:
// Public methods for controlled access
void deposit(double amount) {
balance += amount;
}
void withdraw(double amount) {
if (amount <= balance) {
balance -= amount;
}
}
};
