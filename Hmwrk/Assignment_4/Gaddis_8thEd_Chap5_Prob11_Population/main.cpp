/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 20, 2017, 12:45 AM
 * Purpose: 
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
    int num = 0;
    float avgDI = 0.0;
    int numDays = 0;
    float newPopP = 0.0;
    float newPop = 0.0;
        
    //Input Values
    cout << "Enter number of Organisms: "<<endl;
    cin >> num;
    
    while(num < 2)
{
cout << "ERROR, # of Organisms must be > 2.\n";
cout << "Enter # of Organisms: ";
cin >> num;
}
    cout << "Enter Daily Population Increase: "; 
cin >> avgDI;

while (avgDI < 0)
{
cout << "ERROR, Daily Population Increase must be > 0.\n";
cout << "Enter Daily Population Increase: ";
cin >> avgDI;
}


cout << "Enter # of Days: ";
cin >> numDays;

while(numDays < 1)
{
cout << "ERROR, # of Days must be > 1.\n";
cout << "Enter # of Days";
cin >> numDays;
}


cout <<"Day	 Population\n"; 
cout <<"--------------------------\n"; 
    
    //Process by mapping inputs to outputs
newPopP = (num * avgDI) / 100;
newPop = newPopP + num;    
    
    //Output values
for(int x = 1; x <= numDays; x++)
{
cout << x << "\t\t" << newPop << endl;
}
    
    return 0;
}