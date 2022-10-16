/**
 * @file pointers.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-16
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of pointers in C++. */

#include <iostream>
#include<string>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of pointers"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int a = 20; // declaring a variable
    int *ptra; // declaring a pointer
    ptra = &a; // storing the address of a in ptra

    cout<<"The value of a is : "<<a<<endl;// printing the value of a
    cout<<"The address of a is : "<<ptra<<endl;// printing the address of a
    cout<<"The value of *ptra is : "<<*ptra<<endl;// printing the value of *ptra
    return 0;
}