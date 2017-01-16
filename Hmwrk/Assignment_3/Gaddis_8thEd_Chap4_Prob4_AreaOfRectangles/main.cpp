/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 14, 2017, 1:25 PM
 * Purpose: Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.
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
    int width1,width2,length1,length2,rect1,rect2;
    
    //Input Values
    cout<<"Enter the width of first rectangle in inches: "; 
    cin>>width1; 
    cout<<"Enter the length of first rectangle in inches: "; 
    cin>>length1; 
    cout<<"Enter the width of second rectangle in inches: "; 
    cin>>width2; 
    cout<<"Enter the length of second rectangle in inches: "; 
    cin>>length2; rect1 = width1 * length1; rect2 = width2 * length2;
    
    //Process by mapping inputs to outputs
    rect1 = width1 * length1; 
    rect2 = width2 * length2;
    
    //Output values
    if (rect1>rect2) 
    { 
    cout<<"Rectangle 1 ("<<rect1<<") is "<<rect1-rect2<<" area inches larger than rectangle 2 ("<<rect2<<")."<<endl; 
    } 
    else if (rect1<rect2) 
    { 
    cout<<"Rectangle 2 ("<<rect2<<") is "<<rect2-rect1<<" area inches larger than rectangle 1 ("<<rect1<<")."<<endl; 
    } 
    else if (rect1==rect2) 
    { 
    cout<<"Rectangles 1 and 2 are equal at "<<rect1<<" area inches."<<endl; 
    }
    
    return 0;
}