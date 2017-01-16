/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 16, 2017, 1:43 PM
 * Purpose: Software Sales
A software company sells a package that retails for $99. Quantity discounts are given
according to the following table.
Quantity Discount
10–19 20%
20–49 30%
50–99 40%
100 or more 50%
Write a program that asks for the number of units sold and computes the total cost of
the purchase.
Input Validation: Make sure the number of units is greater than 0.
 */

#include <iostream>
#include <iomanip>
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
    int quantty,package=99,cost;
    
    //Input Values
    cout<<"How many units sold? ";
    cin>>quantty;
    
    //Process by mapping inputs to outputs
    if (quantty>=10&&quantty<=19)
    { 
    cost=package*quantty*0.2;
    cout<<"Total cost is: "<<cost<<endl; 
    }
    else if (quantty>=20&&quantty<=49)
    {
    cost=package*quantty*0.3;
    cout<<"Total cost is: "<<cost<<endl;
    }
    else if (quantty>=50&&quantty<=99)
    {
    cost=package*quantty*0.4;
    cout<<"Total cost is: "<<cost<<endl;
    }
    else if (quantty>100 )
    {
    cost=package*quantty*0.5;
    cout<<"Total cost is: "<<cost<<endl;
    }
    else cost=package*quantty;

    
    //Output values
    cout<<"Total Cost is "<<cost<<endl;
    
    return 0;
}