/**
 * @file arrays.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-15
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concept of arrays in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

     cout<<"Concepts of arrays"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int arr[3] = {1,2,3}; // decalring a fixed size array.
    //index       0 1 2
    // array is a collection of similar data types.

    cout<<"The value at index 0 is : "<<arr[0]<<endl;
    // printing the value at index 0
    cout<<"The value at index 1 is : "<<arr[1]<<endl;
    // printing the value at index 1
    cout<<"The value at index 2 is : "<<arr[2]<<endl;
    // printing the value at index 2

    cout<<"--------------------------"<<endl<<endl;
    // printing a line
     
     cout<<"Concepts of 1Darrays"<<endl<<endl;

    int marks[5]; // declaring an array of size 5

    for(int i=0; i<5; i++){
        cout<<"Enter the marks of "<<i+1<<"th student  : ";
        cin>>marks[i]; // taking input of marks of students
    }

    for(int i=0; i<5; i++){
        cout<<"The marks of "<<i+1<<"th student is : "<<marks[i]<<endl;
    }

    cout<<"--------------------------"<<endl<<endl;
    // printing a line
     
    cout<<"Concepts of 2Darrays"<<endl<<endl;

    int arrays2D[2][3] ={ {1,2,3},
                          {4,5,6}
                        }; // declaring a 2D array

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<"The value at index ["<<i<<"] ["<<j<<"] is : "<<arrays2D[i][j]<<endl;
            // printing the value at index [i] [j]
        }
    }
    
    return 0;
}