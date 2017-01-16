/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 16, 2017, 1:06 PM
 * Purpose: Change for a Dollar Game
Create a change-counting game that gets the user to enter the number of coins required
to make exactly one dollar. The program should ask the user to enter the number of
pennies, nickels, dimes, and quarters. If the total value of the coins entered is equal to
one dollar, the program should congratulate the user for winning the game. Otherwise,
the program should display a message indicating whether the amount entered was more
than or less than one dollar.
 */

#include <iostream>

using namespace std; 
 
//User Libraries

//Global Constants
//e.g., Pi, Gravity, Vc, Math/Science Values
//as well as conversion from one system of units to another
const int penny=1;
const int nickle=5;
const int dime=10;
const int quarter=25;

//Function Prototypes 

//executable code begins here!

int main(int argc, char** argv) {
    //Declare variables
    int numPen,numNick,numDime,numQurt,total;
    
    //Input Values
    cout<<"Enter the number of pennies: "<<endl;
    cin>>numPen;
    cout<<"Enter the number of nickles: "<<endl;
    cin>>numNick;
    cout<<"Enter the number of dimes: "<<endl;
    cin>>numDime; 
    cout<<"Enter the number of quarters: "<<endl;
    cin>>numQurt;
    
    //Process by mapping inputs to outputs
    total=(penny*numPen)+(nickle*numNick)+(dime*numDime)+(quarter*numQurt);
    
    //Output values
    if (total==100)
	cout<<"Congratulations, You Have Won the Grand Prize!"<<endl;
    else if (total>100)
	cout<<"Your total amount is more than one dollar. ";
    else
	cout<<"Your total amount is less than one dollar. ";
        
    
    return 0;
}