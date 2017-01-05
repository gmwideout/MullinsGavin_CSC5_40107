/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 4, 2017, 12:15 PM
 * Purpose:  Gaddis Chapter 2 Problem 17
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100;//conversion to percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned char stkPrce=35;  //Units of $'s/share
    unsigned short nShares=750;//Number of shares
    unsigned char comishn=2;   //Percetn comminsion
    unsigned short stkPaid, comPaid, totPaid;
    
    //Process/Calculations Here
    stkPaid=stkPrce*nShares;            //Amount paid for the stock purchase $'s
    comPaid=stkPaid*comishn/PERCENT;    //Commision on stock purchase $'s
    totPaid=stkPaid+comPaid;            //Total Paid $'s 
   
    //Output Located Here
    cout<<"Stock Price/Share= $"<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares =  "<<nShares<<"shares"<<endl;
    cout<<"Commission          "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commision Paid   = $"<<comPaid<<endl;
    cout<<"Total Paid       = $"<<totPaid<<endl;
    
  

    //Exit
    return 0;
}

