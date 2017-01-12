/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 12:41 PM
 * Purpose:  Property Tax
A county collects property taxes on the assessment value of property, which is 60 percent
of the property’s actual value. If an acre of land is valued at $10,000, its assessment
value is $6,000. The property tax is then 75¢ for each $100 of the assessment value.
The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the
actual value of a piece of property and displays the assessment value and property tax.
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
    float value1,    //The actual value of a property
            value2,  //The assessment value of the property
            propTax, //Property tax
            prpTax2; //Property tax on the number entered
            
    
    //Input or initialize values Here
    propTax=(.000075)*100;
            
    cout<<"What is the actual value of the property?"<<endl;
    cin>>value1;
    //Process/Calculations Here
    value2=value1*.60;
    prpTax2=value2*propTax;
    //Output Located Here
    cout<<"The assessment value of the property is = $"<<value2<<endl;
    cout<<"The propert tax is = $"<<prpTax2<<endl;

    //Exit
    return 0;
}

