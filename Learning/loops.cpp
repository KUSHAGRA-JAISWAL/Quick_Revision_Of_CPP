/**
 * @file loops.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of loops in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of Loops"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

   int index = 0; // decalring a variable.

   while(index < 34){ // using whil loop, which checks the condition and after that performes the execution.
    cout<<"We are at index number : "<<index<<endl;
    index = index +1; // increment index
   }
    index = 0; // intializing index to 0

   do{ // using do while loop, which executes 1 time even if the condition was false, here checks the condition for the second time and than performes execution.
       cout<<"We are At Index No. : "<<index<<endl;
       index= index +1;
   }while(index > 34); // checking the condition

   for(int i = 0; i < 34; i++){ // it is also a loop, the condition is checked and after that the execution is performes,
         cout<<"The Value of i is "<<i<<endl;
   }
    return 0;
}