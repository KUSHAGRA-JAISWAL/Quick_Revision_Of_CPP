/**
 * @file constructor.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-16
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of classes and constructors in C++. */

#include <iostream>
#include<string>
using namespace std;
// header file for input output

class Employee{
        // this is a class
        public: // this is an access specifier
        string name; // this is a data member
        int salary; // this is a data member

        Employee(string nm, int sal){ // this is a constructor
                this->name = nm;
                this->salary = sal;
        }

        void printDetails(){
            //this is a member function
            cout<<"The name of the employee is : "<<this->name<<endl;
            cout<<"The salary of the employee is : "<<this->salary<<" Dollars"<<endl<<endl;
        }
    };

int main(){
// main function 

     cout<<"Concepts of classes and constructors"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line
  

    Employee k("kush constructor", 100000); // this is an object
    Employee h("HRV constructor", 120000); // this is an object

    k.printDetails(); // calling the member function printDetails()
    h.printDetails(); // calling the member function printDetails()
    
    return 0;   
}