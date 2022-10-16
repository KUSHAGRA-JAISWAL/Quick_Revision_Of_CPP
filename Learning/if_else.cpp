/**
 * @file if_else.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of if else in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of if else"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int age; // decalring an input variable.
    
    cout<<"Enter your age:";
    cin>>age;

    if(age > 150 || age < 1){ // using if condition

        cout<<"Your age is invalid ";
    }
    else if(age >= 18){ // using else if condition

        cout<<"You can vote";
    }

    else{ // using else

        cout<<"You can't vote";
    }
    return 0;
}