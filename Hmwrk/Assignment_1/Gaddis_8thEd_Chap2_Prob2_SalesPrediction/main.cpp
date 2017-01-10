/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 10, 2017, 10:17 AM
 * Purpose:  Sales Prediction
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.
 */

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int totSals,ecPercnt,ecSales;
    
    //Input or initialize values Here
    totSals=8.6,   //Total number of sales in millions of dollars
    ecPercnt=.58;  //Percentage of sales that the East Coast division accounts for
      
    //Process/Calculations Here
    ecSales=totSals*ecPercnt;
       
    //Output Located Here
    cout<<"The East Coast division of the company will generate $"<<4.988<<" million in sales."<<endl;

    //Exit
    return 0;
}

