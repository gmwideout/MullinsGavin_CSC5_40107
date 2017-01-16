/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 14, 2017, 12:15 PM
 * Purpose: Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.
 */

#include <iostream>

using namespace std; 
 
//User Libraries

//Global Constants
//e.g., Pi, Gravity, Vc, Math/Science Values
//as well as conversion from one system of units to another
 
//Function Prototypes 

//executable code begins here!

int main(int argc, char** argv) {
    //Declare variables
    int num1,num2;
    
    //Input Values
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    //Process by mapping inputs to outputs
     if(num1>num2)
     cout<<"The larger number is: "<<num1<<endl<<endl;
     else
     cout<<"The larger number is: "<<num2<<endl<<endl;
    //Output values
    
    return 0;
}