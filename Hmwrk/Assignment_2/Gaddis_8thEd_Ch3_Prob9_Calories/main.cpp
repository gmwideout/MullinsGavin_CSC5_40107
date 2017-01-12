/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 10:43 AM
 * Purpose:  How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.
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
    float serving,  //serving size 
            serv1,  //cookies per serving
            cals1,  //calories in 1 serving
            cals2,  //calories in cookies ate
            cals3,  //calories per cookie
            cookies;//amount of cookies eaten
            
    //Input or initialize values Here
    cals1=300;
    cals3=100;
    serv1=3;
     
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
                    
    //Process/Calculations Here
    cals2=(cookies*100);
    
    //Output Located Here
    cout<<"The total calories you ate is = "<<cals2<<endl;

    //Exit
    return 0;
}

