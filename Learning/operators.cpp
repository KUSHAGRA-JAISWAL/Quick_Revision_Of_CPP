/**
 * @file operators.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of Operators in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of Operators"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int a,b; // decalring an input variable.

    cout<<"Enter the First Number:"<<endl;
    cin>>a;
    
    cout<<"Enter the Second Number:"<<endl;
    cin>>b;

    cout<<"The sum is : "<<a + b<<endl;// addition
    cout<<"The difference is : "<<a - b<<endl;//subtraction
    cout<<"The product is : "<<a * b<<endl;//multiplication
    cout<<"The quotient is : "<<(float)a / b<<endl;//division


    return 0;
}