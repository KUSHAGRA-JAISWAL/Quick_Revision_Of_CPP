/**
 * @file switch_case.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of switch case in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of switch case"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int age; // decalring an input variable.
    
    cout<<"Enter your age:";
    cin>>age;

   switch(age){ // using switch case
       
        case 12:
        cout<<"Your are 12 years old"<<endl;
        break; // break is used to end the sequence of execution

        case 18:
        cout<<"Your are 18 years old"<<endl;
        break;

        default:
        cout<<"You are neither 12 not 18"<<endl;
   }
    return 0;
}