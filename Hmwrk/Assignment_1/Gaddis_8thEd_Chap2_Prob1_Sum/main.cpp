/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 9, 2017, 1:37 PM
 * Purpose:  Sum of Two Numbers
Write a program that stores the integers 50 and 100 in variables, and stores the sum of
these two in a variable named total.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Add the variable together
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned char num1,num2,total;
    
    //Input or initialize values Here
    num1=100;
    num2=50;
    
    //Process/Calculations Here
    total=num1+num2;
    //Output Located Here
    
    cout<<"Number 1 = "<<static_cast<int>(num1)<<endl;
    cout<<"Number 2 = "<<static_cast<int>(num2)<<endl;
    cout<<"Total    = "<<static_cast<int>(total)<<endl;

    //Exit
    return 0;
}

