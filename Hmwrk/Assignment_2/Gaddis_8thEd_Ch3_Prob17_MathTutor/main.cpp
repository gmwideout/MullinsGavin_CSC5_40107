/* 
 * File:   main.cpp
 * Author: Gavin Mullins
 * Created on January 12, 2017, 1:00 PM
 * Purpose:  Math Tutor
Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as
247
+129
The program should then pause while the student works on the problem. When the
student is ready to check the answer, he or she can press a key and the program will
display the correct solution:
247
+129
376
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a,b;    //Numbers the student will be adding
    
    //Input or initialize values Here
    a=rand()%1000;
    b=rand()%1000;
            
    cout<<"Solve the following problem"<<endl;
    
    //Process/Calculations Here
    
    //Output Located Here
    printf( "\n%7d\n", a );    // print formatted math question
	printf( " + %4d\n", b );
	printf( " ------" );
	getchar();                 // wait for input
	printf( "%7d\n\n", a+b );  // show the answer

    //Exit
    return 0;
}

