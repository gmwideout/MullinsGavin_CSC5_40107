/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 10:58 AM
 * Purpose:  How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.
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
    float rplcmnt,  //Replacement cost of the building
            bldgCst,//Building cost
            min,    //Minimum insurance
            rec;    //Recommended insurance
            
    //Input or initialize values Here
    rec=.80;
    
    cout<<"How much did the building cost?"<<endl;
    cin>>bldgCst;
    
    //Process/Calculations Here
    min=(bldgCst*rec);
            
    //Output Located Here
    cout<<"The minimum insurance that you should buy for the property is "<<min<<endl;

    //Exit
    return 0;
}

