/**
 * @file strings.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-16
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of strings in C++. */

#include <iostream>
#include<string>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of strings"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    string name= "kushagra";

    cout<<"The name is : "<<name<<endl; // printing the name
    cout<<"The length of the name is : "<<name.length()<<endl; // printing the length of the name
    cout<<"The character at index 3 is : "<<name[3]<<endl; // printing the character at index 3
    cout<<"The substring from index 3 to 6 is : "<<name.substr(3,3)<<endl; // printing the substring from index 3 to 6
    cout<<"The substring from index 0 to 3 is : "<<name.substr(0,3)<<endl; // printing the substring from index 0 to 3
    
    return 0;
}