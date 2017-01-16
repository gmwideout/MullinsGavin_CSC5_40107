/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 16, 2017, 1:36 PM
 * Purpose: Math Tutor
This is a modification of Programming Challenge 17 from Chapter 3 . Write a program
that can be used as a math tutor for a young student. The program should display two
random numbers that are to be added, such as:
247
 129
The program should wait for the student to enter the answer. If the answer is correct,
a message of congratulations should be printed. If the answer is incorrect, a message
should be printed showing the correct answer.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std; 
 
//User Libraries

//Global Constants
//e.g., Pi, Gravity, Vc, Math/Science Values
//as well as conversion from one system of units to another
 
//Function Prototypes 

//executable code begins here!

int main(int argc, char** argv) {
    //Declare variables
    int A,B,C;
    
    //Input Values
    cout<<"Hello, Welcome to Math Tutor 2.0"<<endl;
    cout<<"I will be helping you learn addition today, pay attention."<<"\n\n";
    cout<<"I will display two random numbers, try and solve for the answer."<<endl;
    
    //Process by mapping inputs to outputs
    A=1+rand() % 350;
    B=1+rand() % 350;
    C=A+B;
    
    //Output values
    cout<<"\n";
    cout<<A<<" + "<<B<<" = "<<endl;
    system("pause");
    cout<<A<<" + "<<B<<" = "<<C<<endl;
    
    return 0;
}