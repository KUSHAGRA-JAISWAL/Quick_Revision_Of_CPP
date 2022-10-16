/**
 * @file inheritance.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-16
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of classes and Inheritance in C++. */

#include <iostream>
#include<string>
using namespace std;
// header file for input output

class Employee{
        // this is a class
        public: // this is an access specifier
        string name; // this is a data member
        int salary; // this is a data member

        Employee(string nm, int sal, int sp){ // this is a constructor
                this->name = nm;
                this->salary = sal;
                this->secretPassword = sp;
        }

        void printDetails(){
            //this is a member function
            cout<<"The name of the employee is : "<<this->name<<endl;
            cout<<"The salary of the employee is : "<<this->salary<<" Dollars"<<endl<<endl;
        }

        void getSecretPassword(){
            //this is a member function
            cout<<"The secret password of the employee is : "<<this->secretPassword<<endl<<endl;
            cout<<"--------------------------"<<endl<<endl;
            // printing a line
  
        }

        private: // this is an access specifier
        int secretPassword; // this is a data member
    };

class Programmer : public Employee{
    // this is a class Programmer which is inherited from class Employee
    int getStatus;
};

int main(){
// main function 

     cout<<"Concepts of classes and Inheritance"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line
  

    Employee k("kush constructor", 100000, 0701); // this is an object
    Employee h("HRV constructor", 120000, 1998); // this is an object

    k.printDetails(); // calling the member function printDetails()
    /*
    cout<<"The secret password of the employee is : "<<k.secretPassword<<endl; // this will give an error as the data member secretPassword is private
    */
    k.getSecretPassword(); // calling the member function getSecretPassword()

    h.printDetails(); // calling the member function printDetails()

    return 0;   
}