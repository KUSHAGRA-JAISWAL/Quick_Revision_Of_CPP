/**
 * @file user_input.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of taking input from the user in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of taking input from the user"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    int a,b; // decalring an input variable.

    cout<<"Enter the First Number:"<<endl;
    cin>>a;
    
    cout<<"Enter the Second Number:"<<endl;
    cin>>b;

    cout<<"The First Number is : "<<a<<endl;
    cout<<"The Second Number is : "<<b;

    return 0;
}