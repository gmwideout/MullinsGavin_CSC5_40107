/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 9, 2017, 1:04 PM
 * Purpose:  Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven/Gallons of Gas Used
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
    //Declare all Variables Here
    float MPG;      //Miles Per Gallon
    float Miles,    //Miles Driven
            Gallons;//Gallons of gas used    
        
    //Input or initialize values Here
    cout<<"This problem solves the miles per gallon"<<endl;
    cout<<"How many miles did you travel?"<<endl;
    cin>>Miles;
    cout<<"How many gallons does your gas tank hold?"<<endl;
    cin>>Gallons;
    
    //Process/Calculations Here
    MPG=Miles/Gallons;
    
    //Output Located Here
    cout<<"The Miles per Gallon = "<<MPG<<endl;
    

    //Exit
    return 0;
}

