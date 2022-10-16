/**
 * @file variables_datatypes.cpp
 * @author KUSHAGRA JAISWAL 
 * @date 2022-10-13
 * @copyright Copyright (c) 2022
 */
 
/* Program to understand the concepts of variables and datatypes in C++. */

#include <iostream>
using namespace std;
// header file for input output

int main(){
// main function 

    cout<<"Concepts of Variables and Datatypes"<<endl<<endl;
    // cout is used to print and endl is used to go to new line

    cout<<"--------------------------"<<endl<<endl;
    // printing a line

    int a,b,c; // decalring an integer variable
    short sa; // decalring an short integer variable

    /*
    Variables can start from under score
    e.g. int _a; is also a valid variable
    it is also valid to have integer such as
    int a; or int _a;

    variables cannot start from digits
    e.g. int 7a; is not a valid integer variable

    variable can have digits    
    e.g. int a7; is a valid integer variable

    variable can have any character of something similar to it
    e.g. int abc; is a valid integer variable
    */

    int marksInMaths=88; 
    cout<<"The marks of the student in maths is : "<<marksInMaths<<endl;

    float pi=3.1456;  //this is how to decalre a float variable it is generally used to store float numbers
    cout<<"The value of pi is : "<<pi<<endl;

    double e=2.718;  //this is how to decalre a double varibale it is generally used to store smaller double numbers
    cout<<"The value of e is : "<<e<<endl;

    char ch='A'; //this is how to decalre a character variable or a single character variable
    cout<<"The value of the letter is (print as it is without single quotes): "<<ch<<endl;

    bool status= true; //this is how to decalre a boolean variable (it can either be true or fasle)
    cout<<"The status is (print as it is): "<<status<<endl;

    int const x=100; // this is how to declare a constant variable x=100 the value cannot be changed in the future.
    cout<<"The value of x is (print as it is): "<<x<<endl;

    float const y=2.718; 
    cout<<"The value of y is (print as it is): "<<y<<endl;

    return 0;
}