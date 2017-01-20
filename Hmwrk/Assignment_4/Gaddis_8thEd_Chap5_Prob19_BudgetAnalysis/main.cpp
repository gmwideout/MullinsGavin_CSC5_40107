/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 20, 2017, 2:00 AM
 * Purpose: Budget Analysis
Write a program that asks the user to enter the amount that he or she has budgeted
for a month. A loop should then prompt the user to enter each of his or her expenses
for the month and keep a running total. When the loop finishes, the program should
display the amount that the user is over or under budget.
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
    float budMon;		
    float expMon;		
    float total;			
    int count; 
    
    expMon = 0;
    budMon = 0;
        
    //Input Values
    cout<<"Enter the amount of money you budgeted: "<<endl;
    cin>>budMon;
    
    for (count = 1; count <= 6; count ++ )
	{
	cout<<"Enter all of your expenses for the month: "<<endl;
	cin>>expMon;
	expMon+=expMon;
	}
    
    //Process by mapping inputs to outputs
    total=budMon-expMon;
    
    //Output values
    cout<<"Your total budget after expenses: $"<<total<<endl;
 
    if (total>0)
	cout<<"Your expenses are under the budget!";
    else
	cout<<"Your expenses are over the budget!";
    
    return 0;
}