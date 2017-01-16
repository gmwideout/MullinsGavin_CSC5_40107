/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 3, 2017, 12:15 PM
 * Purpose: Magic Dates
The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.
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
    int month, day, year, magic;
    
    //Input Values
    cout<<"please enter a month in numeric form"<<endl;
    cin>>month;
    cout<<"please enter a day"<<endl;
    cin>>day;
    cout<<"please enter a year"<<endl;
    cin>>year;
    
    //Process by mapping inputs to outputs
    magic=(month * day);
    
    //Output values
    if (magic == year)
{
    cout << "it is magic"<<endl;;
}
    else
    cout << "it is not magic" << endl;

    
    return 0;
}