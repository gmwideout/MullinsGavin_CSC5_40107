/* 
  File:   main.cpp
  Author: Gavin Mullins
  Created on January 18, 2017, 10:35 AM
  Purpose:  Statistics for Craps version 2
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed
#include <fstream> //File stream library 
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Open files
    ifstream in;
    ofstream out;
    in.open("NumberOfGames.dat");
    out.open("ResultsOfGames.dat");
    
    //Declare Variables
    unsigned int nGames=100000;//Number of throws for the pair of dice
    unsigned int wins=0,losses=0,maxThrw=0;
    unsigned int avgThrw=0; 
    
    //Input the number of games
    //Last line will be the number of games
    while (in>>nGames);   
    
    //Loop and take Dice statistics
    for(int game=1;game<=nGames;game++){
        //Call random number generator for the dice
        char die1=rand()%6+1;//Value from 1 to 6
        char die2=rand()%6+1;//Value from 1 to 6
        char sum=die1+die2;
        unsigned int cntThrw=1;
        avgThrw++;
        //Now determine wins or losses
        switch(sum){
            case 2:case 3:case 12:losses++;break;
            case 7:case 11:wins++;break;
            default:{
            bool kpThrw=true;
                do{
                    die1=rand()%6+1;//Value from 1 to 6
                    die2=rand()%6+1;//Value from 1 to 6
                    avgThrw++;cntThrw++;
                    char sumAgn=die1+die2;
                    if(sumAgn==7){
                        losses++;
                        kpThrw=false;
                    }else if(sumAgn==sum){
                        wins++;
                        kpThrw=false;
                    }
                }while(kpThrw);
            }
        }
        if(maxThrw<cntThrw)maxThrw=cntThrw;
    }
    
    //Output values
    out<<"The total number of Crap games played = "<<nGames<<endl;
    out<<"The total wins = "<<wins<<endl;
    out<<"The total losses = "<<losses<<endl;
    out<<"The total number of Crap games played = "<<wins+losses<<endl;
    out<<"Percentage wins = "<<100.0f*wins/nGames<<"%"<<endl;
    out<<"Percentage losses = "<<100.0f*losses/nGames<<"%"<<endl;
    out<<"Average number of throws per game = "
            <<static_cast<float>(avgThrw)/nGames<<endl;
    out<<"Maximum number of throws in a game = "<<maxThrw<<endl;
    
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}