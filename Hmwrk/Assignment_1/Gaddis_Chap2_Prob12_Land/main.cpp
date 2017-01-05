/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 4, 2016, 1:45 PM
 * Purpose:  Land Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int CNVACFT=43560;//Conversion Acres to Feet

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nAcres, nFt2;
    
    //Input or initialize values Here
    cout<<"This is a conversion program"<<endl;
    cout<<"From number of Acres to Feet squared"<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
    
    //Process/Calculations Here
    nFt2=nAcres*CNVACFT;
    
    //Output Located Here
    cout<<"The Number of Acres Input = "<<nAcres<<endl;
    cout<<"Equvalent to "<<"ft^2"<<endl;

    //Exit
    return 0;
}

