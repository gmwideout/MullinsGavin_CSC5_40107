/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 14, 2017, 1:30 PM
 * Purpose: Mass and Weight
Scientists measure an object’s mass in kilograms and its weight in newtons. If you know
the amount of mass that an object has, you can calculate its weight, in newtons, with
the following formula:
Weight  mass  9.8
Write a program that asks the user to enter an object’s mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a message
indicating that the object is too light.
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
    int mass;
    float weight;
    
    //Input Values
    cout<<"enter the mass of body"<<endl;
    cin>>mass;
    
    //Process by mapping inputs to outputs
    weight=mass*9.8;
    
    //Output values
    if(mass>=1000)
    {
    cout<<"too much mass "<<mass<<endl;
    }
    else if(mass<=10)
    {
    cout<<"too little mass "<<mass<<endl;
    }
    cout<<"it's the weight "<<weight<<endl;
   } 
    
return 0;
}