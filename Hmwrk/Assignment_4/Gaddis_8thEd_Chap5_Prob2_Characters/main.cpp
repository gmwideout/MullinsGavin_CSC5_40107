/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 19, 2017, 10:20 AM
 * Purpose:  Characters for the ASCII Codes
Write a program that uses a loop to display the characters for the ASCII codes 0
through 127. Display 16 characters on each line.
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
    char letter;
    
    //Input or initialize values Here
    cout<<" I will display the characters for ASCII codes 0 through 127.\n"<<endl;
    
    //Process/Calculations Here
    letter=0;
    
    //Output Located Here
    for(int count=0;count<= 127;count++)
        
	{
                if (count%16==0)
           		cout<<endl; 
		cout<<letter<<"  "<<endl;
		letter++;
	} 
    

    //Exit
    return 0;
}

