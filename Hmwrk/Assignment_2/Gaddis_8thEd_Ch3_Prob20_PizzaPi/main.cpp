/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 10:30 PM
 * Purpose: Pizza Pi
Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size
can be divided into. The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
C) Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know
the following facts:
• Each slice should have an area of 14.125 inches.
• To calculate the number of slices, simply divide the area of the pizza by 14.125.
• The area of the pizza is calculated with this formula:
Area = π r 2
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std; 
 
//User Libraries

//Global Constants
//e.g., Pi, Gravity, Vc, Math/Science Values
//as well as conversion from one system of units to another
#define Pi = 3.14159;

//Function Prototypes 

//executable code begins here!

int main(int argc, char** argv) {
    //Declare variables
   float pizzaD,    //Diameter of the pizza
            nSlices,//Number of pizza slices
            radius, //Half of the diameter
            area;   //Area of each slice
            
    //Input Values
    cout<<"Enter the diameter of the pizza"<<endl;
    cin>>pizzaD;
    //Process by mapping inputs to outputs
    radius=pizzaD/2;
    area= 3.14159*(radius,2);
    nSlices=area/14.125;
    
    //Output values
    cout<<"The number of slices are "<<nSlices<<endl;
    
    return 0;
}