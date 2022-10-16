/**
 * @file class_object.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-16
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of classes and objects in C++. */

#include <iostream>
#include<string>
using namespace std;
// header file for input output

class Employee{
        // this is a class
        public: // this is an access specifier
        string name; // this is a data member
        int salary; // this is a data member

        void printDetails(){
            //this is a member function
            cout<<"The name of the employee is : "<<this->name<<endl;
            cout<<"The salary of the employee is : "<<this->salary<<" Dollars"<<endl;
        }
    };

int main(){
// main function 

     cout<<"Concepts of classes and objects"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

   
    Employee k; // this is an object

    k.name = "kushagra"; // assigning a value to the data member name
    k.salary = 100000; // assigning a value to the data member salary
    k.printDetails(); // calling the member function printDetails()

    cout<<"The name of the employee is : "<<k.name<<" and the salary of employee is : "<<k.salary<<" Dollars"<<endl; // printing the name and salary of the employee
    
    return 0;
}