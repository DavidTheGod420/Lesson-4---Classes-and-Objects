/*
Name: John Doe
Course: CSCI 272
Lesson Number: Lesson 4
Code Topic: Copy Constructor Example
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
