/*
Name: david 
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy encapsulation Example
Date: 02/15/2026
*/

class User {
private:
std::string username;
std::string password;
public:
User(const std::string& uname, const std::string& pwd){
username = uname;
password = pwd;
}
bool login(const std::string& inputUser, const std::string& inputPwd) const
{
return (inputUser == username) & (inputPwd == password);
}
void updatePassword(const std::string& newPwd) {
password = newPwd;
}
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
/*
Reflection:
1. What I understood:
 I understood the variables and the functions shown where combined into a single unit while displaying a clean interface for the user 
2. Difficulties:
 I initially struggled with understanding how multiple variables can be grouped into 1 
3. Research:
 I searched online about the understanding of encapsulation and looked up more examples
4. AI Usage:
 i used google ai search to get a simple definition
5. What I learned:
 I learned how encapsulation makes interfaces run smoother.
*/
