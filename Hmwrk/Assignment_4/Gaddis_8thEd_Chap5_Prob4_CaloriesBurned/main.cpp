/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 20, 2017, 12:15 AM
 * Purpose: Calories Burned
Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
 */

#include <iostream>
#include <string>

using namespace std; 
 
//User Libraries

//Global Constants
//e.g., Pi, Gravity, Vc, Math/Science Values
//as well as conversion from one system of units to another
 
//Function Prototypes 

//executable code begins here!

int main(int argc, char** argv) {
    //Declare variables
    for(int i = 10; i <= 30; i += 5)
        std::cout<<i*3.6<< " calories burnt after: "<<i<<" minutes.\n";
    
    //Input Values
    
    //Process by mapping inputs to outputs
    std::cout<<"Press enter to continue...\n";
    std::string s; 
    std::getline(std::cin, s);
    
    //Output values
    
    return 0;
}