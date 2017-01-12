/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 1:27 PM
 * Purpose:  Interest Earned
Assuming there are no deposits other than the original investment, the balance in a
savings account after one year may be calculated as
Amount = Principal *(1 +
Rate
T
)T
Principal is the balance in the savings account, Rate is the interest rate, and T is
the number of times the interest is compounded during a year ( T is 4 if the interest is
compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of times
the interest is compounded. It should display a report similar to
Interest Rate: 4.25%
Times Compounded: 12
Principal: $ 1000.00
Interest: $ 43.34
Amount in Savings: $ 1043.34
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
    float rate,     //Interest rate
            compnd, //Times compounded per year
            prncpl,//Principal is the balance in the saving account
            intrest,//The interest on the principle
            amount; //The total of the principal and the interest
    
    //Input or initialize values Here
    cout<<"What is the principal?"<<endl;
    cin>>prncpl;
    cout<<"What is the interst rate? Enter in decimal form."<<endl;
    cin>>rate;
    rate/=100;
    cout<<"How many times is it compounded per year?"<<endl;
    cin>>compnd;
                
    //Process/Calculations Here
    intrest=rate*prncpl;
    amount=prncpl+intrest;
    //Output Located Here
    cout<<"Interest Rate     = "<<rate<<endl;
    cout<<"Times Compounded  = "<<compnd<<endl;
    cout<<"Principal         = $"<<prncpl<<endl;
    cout<<"Interest          = $"<<intrest<<endl;
    cout<<"Amount in Savings = $"<<amount<<endl;

    //Exit
    return 0;
}

