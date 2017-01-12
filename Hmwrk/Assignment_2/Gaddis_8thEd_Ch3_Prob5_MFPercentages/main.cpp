/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 10:19 AM
 * Purpose:  Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
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
    float nMales,   //Number of males registered in the class
            nGirls; //Number of females registered in the class
    float total;    //Total number of people enrolled in the class
    float pMale,    //Percentage of male students
            pGirl;  //Percentage of female students
    
    //Input or initialize values Here
    cout<<"How many males are registered for the class?"<<endl;
    cin>>nMales;
    cout<<"How many females are registered for the class?"<<endl;
    cin>>nGirls;
        
    //Process/Calculations Here
    total=nMales+nGirls;
    pMale=nMales/total;
    pGirl=nGirls/total;
    
    //Output Located Here
    cout<<"The total number of students enrolled in the class = "<<total<<endl;
    cout<<"The percentage of male students is                 = %"<<pMale<<endl;
    cout<<"The percentage of female students is               = %"<<pGirl<<endl;

    //Exit
    return 0;
}

