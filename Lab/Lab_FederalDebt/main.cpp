/* 
 * File:   main.cpp
 * Author: Gvain Mullins
 * Created on Janaury 10, 2017, 12:29 PM
 * Purpose: Federal Deficit
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
    float fedDefO,fedDefN; //Federal deficit old in 2008, Federal deficit new in 2016
    float popOld,popNew;   //Population old in 2008, population new in 2016
    float oldDebt,newDebt; //Old debt per person, new debt per person
    
    //Input or initialize values Here
    fedDefO=10.6e10;
    fedDefN=19.5e10;
    popOld=304e6;
    popNew=320e6;
            
    //Process/Calculations Here
    oldDebt=(fedDefO/popOld)*100;
    newDebt=(fedDefN/popNew)*100;
            
    //Output Located Here
    cout<<"The Federal Deficit in 2008 was = $"<<fedDefO<<endl;
    cout<<"The Federal deficit in 2016 was = $"<<fedDefN<<endl;
    cout<<"The US population in 2008 was   =  "<<popOld<<endl;
    cout<<"The US population in 2016 was   =  "<<popNew<<endl;
    cout<<"The debt per person in 2008 was = $"<<oldDebt<<endl;
    cout<<"The debt per person in 2016 was = $"<<newDebt<<endl;    

    //Exit
    return 0;
}

