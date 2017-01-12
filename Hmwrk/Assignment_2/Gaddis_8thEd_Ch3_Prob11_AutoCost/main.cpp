/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 11:11 AM
 * Purpose:  Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance, gas,
oil, tires, and maintenance. The program should then display the total monthly cost of
these expenses, and the total annual cost of these expenses.
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
    float loanP,        //loan payment
            insrnce,    //insurance
            gas,        //gas
            oil,        //oil
            tires,      //tires
            mntnnce,   //maintenance
            totalM,    //Total monthly cost
            totalA;    //Total annual cost
    
    //Input or initialize values Here
    cout<<"Enter the monthly loan payment"<<endl;
    cin>>loanP;
    cout<<"Enter the monthly insurance price"<<endl;
    cin>>insrnce;
    cout<<"Enter the monthly gas price"<<endl;
    cin>>gas;
    cout<<"Enter the montly oil cost"<<endl;
    cin>>oil;
    cout<<"Enter the monthly tire cost"<<endl;
    cin>>tires;
    cout<<"Enter the monthly maintenance cost"<<endl;
    cin>>mntnnce;
    
    //Process/Calculations Here
    totalM=loanP+insrnce+gas+oil+tires+mntnnce;
    totalA=(totalM)*12;
            
    
    //Output Located Here
    cout<<"The total monthly cost for your vehicle is =$"<<totalM<<endl;
    cout<<"The total annual cost for your vehicle is  =$"<<totalA<<endl;

    //Exit
    return 0;
}

