/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 9, 2017, 12:41 PM
 * Purpose:  Triangle Pattern
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
    char c; //Variable to build the triangle with
    
    //Input or initialize values Here
    cout<<"This program outputs a triangle"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<endl<<"A triangle with the letter"<<c<<endl<<endl;
    
    cout<<"   "<<c<<"   "<<endl;
    cout<<"  "<<c<<c<<c<<"  "<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<" "<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<" "<<endl;
    cout<<"  "<<c<<c<<c<<"  "<<endl;
    cout<<"   "<<c<<"   "<<endl;

    //Exit
    return 0;
}

