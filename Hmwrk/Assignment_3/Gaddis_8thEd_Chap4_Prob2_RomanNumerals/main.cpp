/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 14, 2017, 12:35 PM
 * Purpose: Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
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
    int num;
    
    //Input Values
    cout<<"Enter a number (1-10): ";
    cin>>num; 
    
    //Process by mapping inputs to outputs
        
    //Output values 
    switch (num) 
    {
    case 1:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"I.";
    break;
    case 2:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"II.";
    break;
    case 3:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"III.";
    break;
    case 4:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"IV.";
    break;
    case 5:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"V.";
    break;
    case 6:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"VI.";
    break;
    case 7:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"VII.";
    break;
    case 8:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"VIII.";
    break;
    case 9:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"IX.";
    break;
    case 10:
    cout<<"The Roman numeral version of "<<num<<" is ";
    cout<<"X.";
    break;
    default: cout<<"Enter a number in the range 1 through 10."; break;
}
   

    
    return 0;
}