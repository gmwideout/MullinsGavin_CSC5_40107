/*
 *  File:  main.cpp
 * Author: Gavin Mullins
 * Created on January 16, 2017, 1:54 PM
 * Purpose: Running the Race
Write a program that asks for the names of three runners and the time it took each
of them to finish a race. The program should display who came in first, second, and
third place.
Input Validation: Only accept positive numbers for the times.
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
    string run1, run2, run3;
    int time1, time2, time3;
    
    //Input Values
    cout<<" Enter the name of the runners and their time.\n Seperate name and time with a space."<<endl;
    cout<<"\n Enter the name of runner 1 and the time: "<<endl;
    cin>>run1 >> time1;
    cout<<" Enter the name of runner 2 and the time: "<<endl;
    cin>>run2>>time2;
    cout<<" Enter the name of runner 3 and the time: ";
    cin>>run3>>time3;
    
    //Process by mapping inputs to outputs
    {    //check if runner one came in first
if(time1 < time2 && time1 < time3)
  {
    if(time2 < time3) //if he did, then check to see where run2 and run3 placed
     {
        cout<<run1<<" came in first with a score of "<<time1<<endl;
        cout<<run2<<" came in second with a score of "<<time2<<endl;
        cout<<run3<<" came in third with a score of "<<time3<<endl;
     }
    else
     {
        cout<<run1<<" came in first with a score of "<<time1<<endl;
        cout<<run3<<" came in second with a score of "<<time3<<endl;
        cout<<run2<<" came in third with a score of "<<time2<<endl;
     }
  }
}
{ // check if 2 came first
if(time2 < time1 && time2 < time3)
  {
    if(time1 < time3) //if he did, then check to see where run1 and run3 placed
     {
        cout<<run2<<" came in first with a score of "<<time2<<endl;
        cout<<run1<<" came in second with a score of "<<time1<<endl;
        cout<<run3<<" came in third with a score of "<<time3<<endl;
     }
    else
     {
        cout<<run2<<" came in first with a score of "<<time2<<endl;
        cout<<run3<<" came in second with a score of "<<time3<<endl;
        cout<<run1<<" came in third with a score of "<<time1<<endl;
     }
  }
}
{ // check if 3 came first
if(time3 < time1 && time3 < time2)
  {
    if(time2 < time1) //if he did, then check to see where run1 and run2 placed
     {
        cout<<run3<<" came in first with a score of "<<time3<<endl;
        cout<<run2<<" came in second with a score of "<<time2<<endl;
        cout<<run1<<" came in third with a score of "<<time1<<endl;
     }
    else
     {
        cout<<run3<<" came in first with a score of "<<time3<<endl;
        cout<<run1<<" came in second with a score of "<<time1<<endl;
        cout<<run2<<" came in third with a score of "<<time2<<endl;
     }
  }
}
    
    //Output values
    
    return 0;
}