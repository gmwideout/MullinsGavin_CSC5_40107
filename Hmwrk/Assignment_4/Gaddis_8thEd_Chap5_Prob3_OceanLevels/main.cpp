/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 19, 2017, 10:37 AM
 * Purpose:  Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays a table showing the number of millimeters that the ocean will
have risen each year for the next 25 years.
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
    int num;         // Loop counter variable
    int maxvalue = 25;  // Maxium value to display
    int milli = 1.5;  //millimeters per year
    
    //Input or initialize values Here
    cout<<"The ocean is rising 1.5 millimeter per year for the next 25 years."<<endl;
     
    cout << " Years                 millimeters\n"<<endl;
    cout << "-----------------------------\n"<<endl;
    
    //Process/Calculations Here
    for (num<=maxvalue;num++;)   
    
    //Output Located Here
    cout<<num<<"\t\t"<<(num*milli)<<endl;
      
    

    //Exit
    return 0;
}

