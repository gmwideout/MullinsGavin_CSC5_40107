/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 10, 2017, 5:06 PM
 * Purpose: Test Average
Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
 */

#include <iostream>
#include <iomanip> //Needed to use manipulators with parameters (precision, width)
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
    float test1,test2,test3,test4,test5,avgTest; //First test score, Second test score, Third test score, Fourth test score, Fifth test score, Average test score
    
    //Input Values 
    cout<<"Enter five test scores"<<endl;
    cin>>test1,test2,test3,test4,test5;
    
    //Process by mapping inputs to outputs
    cout<<setprecision(3); 
    avgTest=(test1 + test2 + test3 + test4 + test5) / 5;
        
    //Output values
    cout<<"The Average test score is = "<<avgTest<<endl;
    
    return 0;
}