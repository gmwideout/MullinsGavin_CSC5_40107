/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 18, 2017, 10:28 PM
 * Purpose: Sum of Numbers
Write a program that asks the user for a positive integer value. The program should use
a loop to get the sum of all the integers from 1 up to the number entered. For example,
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50.
Input Validation: Do not accept a negative starting number.
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
    int sum = 0;
    int num;
    
    //Input Values
    cout<<"Enter a number greater than 0.\n"<<endl;
    cin>>num;
    
    //Process by mapping inputs to outputs
    for (int counter = 0; counter <= num; counter++)
	
	{	
		sum = sum + num;
		
		counter++;
	}
	   
    //Output values
    cout << "The sum of numbers 1 to " << num
			 << " " << "is " << sum << endl;
		
	if (num < 1) 
		{
			cout << "\n" << num << " is an invalid input.";
			cout << " The program will now terminate.\n";
		
		}
    
    return 0;
}