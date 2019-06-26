
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <string.h>
#include <sstream>
using namespace std;
class Users
{
    private:
        string name;
        int age;
        char gender;
        string password;
        string username;
    public:
       Users(string name, int age, char gender, string password, string username){
           this->name = name;
           this->age = age;
           this->gender = gender;
           this->password = password;
           this->username = username;
       }
       ~Users(){
       }
       Users(string username, string password){
            this->username = username;
            this->password = password;
       }
       string getUsername(){
            return username;
       }
       void setUsername(string username){
            this->username=username;
       }
       string getPassword(){
            return password;
       }
       void setPassword(string password){
            this->password=password;
       }
};
