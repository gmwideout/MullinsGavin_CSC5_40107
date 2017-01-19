/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 19, 2017, 10:51 AM
 * Purpose:  Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
Input Validation: Do not accept a number less than 1 for the number of days worked.
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int salary=1,totPay=0,maxDays=30; //Salary and pay in pennies
    
    //Input or initialize values Here          
       
    //Process/Calculations Here
    for(int day=1;day<=maxDays;day++,salary*=2){
        int dollars;
        int cents;
        cents=salary%100;
        dollars=(salary-cents)/100;
        cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl;
        totPay+=salary;
        cents=totPay%100;
        dollars=(totPay-cents)/100;
        cout<<"Total pay for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl<<endl;
    }
    
    //Predicting the result
    double salLDay=(pow(2,maxDays-1))/100;
    double totLDay=(pow(2,maxDays)-1)/100;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final Salary predicted = $"<<salLDay<<endl;
    cout<<"Final Total pay predicted = $"<<totLDay<<endl;
    
  

    //Exit
    return 0;
}

