/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 20, 2017, 12:25 AM
 * Purpose: Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
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
    const int rate=0.04,curChrg=2500.0;
    int Year;
    float YrRate;
    
    //Input Values
    cout<<"\nCountry club projected rates\n"<<endl;
    cout<<"    for the next six years\n"<<endl;
    cout<<"-----------------------------\n"<<endl;
    cout<<"      Year       Rate\n"<<endl;
    cout<<"-----------------------------\n"<<endl;
    
    //Process by mapping inputs to outputs
    for(Year=1;Year<=6;Year++)
	{
		YrRate=curChrg*(1+Year*rate);
		cout<<"       "<<Year<<"         "<<YrRate<<endl;
	}
    
    //Output values
    
    return 0;
}