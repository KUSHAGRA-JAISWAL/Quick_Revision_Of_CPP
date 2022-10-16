/**
 * @file functions.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-15
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of functions in C++. */

#include <iostream>
using namespace std;
// header file for input output

int addTwoNumbers(int a, int b){ 
    // Function to add two numbers, it takes two integers as an argument and return the result in form of integers
    return a+b;
} // add two numbers and return the sum

int main(){
// main function 

     cout<<"Concepts of functions"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int a, b; // declaring two variable.

    cout<<"Enter the first number : ";
    cin>>a; // taking input of 1st number

    cout<<"Enter the second number : ";
    cin>>b; // taking input of second number

    cout<<"The sum of the given numbers : "<<addTwoNumbers(a,b); // calling the function from main function
 
    return 0;
}