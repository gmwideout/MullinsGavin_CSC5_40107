/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 10, 2017, 12:55 PM
 * Purpose:  Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.
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
    float gallons, //Number of gallons that the gas tank holds
            miles; //Number of miles traveled on a single tank of gas
    float MPG;     //Miles Per Gallon
    
    //Input or initialize values Here
    cout<<"This program calculates the miles per gallon of gas in your car"<<endl;
    cout<<"Enter the number of gallons of gas that your car can hold"<<endl;
    cin>>gallons;
    cout<<"Enter the number of miles that can be driven on a single full tank of gas"<<endl;
    cin>>miles;
    
    //Process/Calculations Here
    MPG=miles/gallons;
    
    //Output Located Here
    cout<<"The Miles per Gallon = "<<MPG<<endl;
    

    //Exit
    return 0;
}

