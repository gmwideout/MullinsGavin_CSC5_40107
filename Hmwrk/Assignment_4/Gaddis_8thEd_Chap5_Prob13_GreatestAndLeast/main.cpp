/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 20, 2017, 1:35 PM
 * Purpose: The Greatest and Least of These
Write a program with a loop that lets the user enter a series of integers. The user should
enter −99 to signal the end of the series. After all the numbers have been entered, the
program should display the largest and smallest numbers entered.
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
    int greatest = 0;
    int smallest = 999999;
    int value = 0;
    while (value != -99)
    
    //Input Values
        {
        cout << "Enter integer (if you would like to stop enter -99): ";
        cin >> value;
        if (value > greatest && value != -99)
        {
            greatest = value;
        }        
        if (value < smallest && value != -99)
        {
            smallest = value;
        }
    }

    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "The greatest value entered was " << greatest << endl;
    cout << "The smallest value entered was " << smallest << endl;

    
    return 0;
}