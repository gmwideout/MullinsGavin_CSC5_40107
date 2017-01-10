/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 10, 2017, 12:05 PM
 * Purpose:  Federal Budget for Military and NASA
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
    float fedBugt,nasaB,miltryB;//Federal budget, NASA budget, military budget
    float prcntN,prcntM;      //Percent of budget for NASA, percent of budget for Military
    
    //Input or initialize values Here
    fedBugt=3.54e12;
    miltryB=609e9;
    nasaB=19e9;
    
    //Process/Calculations Here
    prcntN=(nasaB/fedBugt)*100;
    prcntM=(miltryB/fedBugt)*100;
    
    //Output Located Here
    cout<<"The total federal budget is = $"<<fedBugt<<endl;
    cout<<"NASA's budget is            = $"<<nasaB<<endl;
    cout<<"The Military budget is      = $"<<miltryB<<endl;
    cout<<"NASA's budget is              %"<<prcntN<<endl;
    cout<<"The Military budget is        %"<<prcntM<<endl;

    //Exit
    return 0;
}

