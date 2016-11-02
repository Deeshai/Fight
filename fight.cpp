/*
 project1.cpp
 Deeshai Escoffery
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;

int main()
{
    //declare file pointer for input
    //ifstream infile
    
    ifstream infile;
    
    //declare file pointer for output
    //ofstream outfile
    
    ofstream outfile2;
    
    //Declare variables
    int MenuChoice = 0, MenuChoice2 = 0, MenuChoice3 = 0, MenuChoice4 = 0, robotChoice = 0, userAttack = 0, win = 0, loss = 0, score = 0, highscore = 0;
    string Username, Pname;
    
    //open file "highscore.txt"
    
    infile.open("highscore.txt", ios::in);
    
    //read in Username and score
    
    infile>>Pname>>highscore;
    
    //close file
    
    infile.close();
    
    //seed random number generator
    
    //srand(time(NULL));
    
    //Intro
    cout<<"TOAD INC. PRESENTS..."<<endl;
    cout<<"FIGHT!!!\n"<<endl;
    
    do
    {
        //prompt for the menu choice
        cout<<"Please choose from the following menu:\n"<<endl;
        cout<<"1) See Rules\n2) Play Game\n3) Exit\n"<<endl;
        cout<<"Enter your choice: ";
        cin>>MenuChoice;
        cout<<endl;
        
        
        
        if (MenuChoice == 1)
        {
            //display the rules
            cout<<"Welcome to the world of Fight, the kingdom is under attack by robots built by Dr.Toad, the world of Fight needs your help to save the civilians against total doom at the hands of Dr.Toad and his robots.\n"<<endl;
            cout<<"These are the rules:\n"<<endl;
            cout<<"Enter your character name.\n"<<endl;
            cout<<"Choose a character.\n"<<endl;
            cout<<"Choose a weapon.\n"<<endl;
            cout<<"Choose area to defend.\n"<<endl;
            cout<<"The only way to defeat the robot is to out guess the robot.\n"<<endl;
            cout<<"You have 5 guesses, if you guess the right number more than 3 times you defeat the robot.\n"<<endl;
            cout<<"Each attack is worth 25 points.\n"<<endl;
            cout<<"Defeat the robot, and you will save the day.\n"<<endl;
            cout<<"Be careful though if you guess wrong more than 3 times, its game over\n."<<endl;
            cout<<"Your score will be shown at the end.\n"<<endl;
        }
        else if (MenuChoice == 2)
        {
            //start the game
            cout<<"Let's Begin!!!\n"<<endl;
            
            cout<<"Please enter your character name: ";
            cin>>Username;
            cout<<endl;
            
            do
            {
                //prompt for the menu choice
                cout<<"Please choose a character:\n"<<endl;
                cout<<"1) Enforcer\n2) Assassin\n3) Engineer\n"<<endl;
                cout<<"Enter your choice: ";
                cin>>MenuChoice2;
                cout<<endl;
                
                if (MenuChoice2 > 3)
                {
                    //display invalid
                    cout<<"Invalid. Please enter a choice from the menu.\n"<<endl;
                }
            }
            while(MenuChoice2 > 3);
            
            do
            {
                //prompt for the menu choice
                cout<<"Please choose a weapon:\n"<<endl;
                cout<<"1) Dual Pistol\n2) Electrified arrow shooter\n3) Semiautomic Machine Gun\n"<<endl;
                cout<<"Enter your choice: ";
                cin>>MenuChoice3;
                cout<<endl;
                
                if (MenuChoice3 > 3)
                {
                    //display invalid
                    cout<<"Invalid. Please enter a choice from the menu.\n"<<endl;
                }
            }
            while (MenuChoice3 > 3);
            
            do
            {
                //prompt for the menu choice
                cout<<"Please choose an area to defend:\n"<<endl;
                cout<<"1) City\n2) Slums\n3) Forest\n"<<endl;
                cout<<"Enter your choice: ";
                cin>>MenuChoice4;
                cout<<endl;
                
                if (MenuChoice4 > 3)
                {
                    //display invalid
                    cout<<"Invalid. Please enter a choice from the menu.\n"<<endl;
                }
            }
            while (MenuChoice4 > 3);
            
            if(MenuChoice4 == 1)
            {
                cout<<"Welcome to the City!\n"<<endl;
                cout<<"The robots are on attack!\n\nHurry up and save the day!\n"<<endl;
                
                
                do
                {
                    for(int i = 1; i <= 5; i++)
                    {
                        //generate a random number from 1 to 5
                        robotChoice = rand()%5+1;
                        
                        do
                        {
                            //prompt user for an attack
                            cout<<"Please enter an attack between 1 and 5: ";
                            cin>>userAttack;
                            cout<<endl;
                            
                            if(userAttack < 1 or userAttack > 5)
                                //display invalid
                                cout<<"Invalid! Please enter an attack between 1 and 5!\n"<<endl;
                        }
                        while(userAttack < 1 or  userAttack > 5);
                        
                        if(userAttack == robotChoice)
                        {
                            cout<<"Attack made!\n Robot damaged!\nWell done!\n"<<endl;
                            score += 25;
                            win += 1;
                        }
                        if (userAttack < robotChoice or userAttack > robotChoice)
                        {
                            cout<<"Attack missed!\nRobot attack made!\nLife lost!\n"<<endl;
                            loss += 1;
                        }
                    }
                    if (win > loss)
                    {
                        cout<<"You have defeated the robot!!!\n"<<endl;
                        cout<<"Get ready to fight again!!!\n"<<endl;
                    }
                    if (loss > win)
                    {
                        cout<<"You have lost the battle!!!\n"<<endl;
                    }
                }
                while (win > loss);
            }
            if(MenuChoice4 == 2)
            {
                cout<<"Welcome to the Slums!\n"<<endl;
                cout<<"The robots are on attack!\n\nHurry up and save the day!\n"<<endl;
                
                
                do
                {
                    for(int i = 1; i <= 5; i++)
                    {
                        //generate a random number from 1 to 5
                        robotChoice = rand()%5+1;
                        
                        do
                        {
                            //prompt user for an attack
                            cout<<"Please enter an attack between 1 and 5: ";
                            cin>>userAttack;
                            cout<<endl;
                            
                            if(userAttack < 1 or userAttack > 5)
                                //display invalid
                                cout<<"Invalid! Please enter an attack between 1 and 5!\n"<<endl;
                        }
                        while(userAttack < 1 or  userAttack > 5);
                        
                        if(userAttack == robotChoice)
                        {
                            cout<<"Attack made!\n Robot damaged!\nWell done!\n"<<endl;
                            score += 25;
                            win += 1;
                        }
                        if (userAttack < robotChoice or userAttack > robotChoice)
                        {
                            cout<<"Attack missed!\nRobot attack made!\nLife lost!\n"<<endl;
                            loss += 1;
                        }
                    }
                    if (win > loss)
                    {
                        cout<<"You have defeated the robot!!!\n"<<endl;
                        cout<<"Get ready to fight again!!!\n"<<endl;
                    }
                    if (loss > win)
                    {
                        cout<<"You have lost the battle!!!\n"<<endl;
                    }
                }
                while (win > loss);
            }
            if(MenuChoice4 == 3)
            {
                cout<<"Welcome to the Forest!\n"<<endl;
                cout<<"The robots are on attack!\n\nHurry up and save the day!\n"<<endl;
                
                
                do
                {
                    for(int i = 1; i <= 5; i++)
                    {
                        //generate a random number from 1 to 5
                        robotChoice = rand()%5+1;
                        
                        do
                        {
                            //prompt user for an attack
                            cout<<"Please enter an attack between 1 and 5: ";
                            cin>>userAttack;
                            cout<<endl;
                            
                            if(userAttack < 1 or userAttack > 5)
                                //display invalid
                                cout<<"Invalid! Please enter an attack between 1 and 5!\n"<<endl;
                        }
                        while(userAttack < 1 or  userAttack > 5);
                        
                        if(userAttack == robotChoice)
                        {
                            cout<<"Attack made!\n Robot damaged!\nWell done!\n"<<endl;
                            score += 25;
                            win += 1;
                        }
                        if (userAttack < robotChoice or userAttack > robotChoice)
                        {
                            cout<<"Attack missed!\nRobot attack made!\nLife lost!\n"<<endl;
                            loss += 1;
                        }
                    }
                    if (win > loss)
                    {
                        cout<<"You have defeated the robot!!!\n"<<endl;
                        cout<<"Get ready to fight again!!!\n"<<endl;
                    }
                    if (loss > win)
                    {
                        cout<<"You have lost the battle!!!\n"<<endl;
                    }
                }
                while (win > loss);
            }
            
            if (score > highscore)
            {
                cout<<Username<<" scored:\t"<<score<<" points\n"<<endl;
                cout<<"CONGRATULATIONS!!! NEW HIGH SCORE!!!\n"<<endl;
                //open file "highscore.txt" for append
                
                outfile2.open("highscore.txt", ios::out);
                
                //write Username and score
                
                outfile2<<Username<<"\t\t"<<score<<endl;
                
                //close file
                
                outfile2.close();
            }
            if (highscore > score or highscore == score)
            {
                cout<<Username<<" scored:\t"<<score<<" points\n"<<endl;
            }
            
            score = 0;
            win = 0;
            loss = 0;
        }
        else if (MenuChoice == 3)
            //exit the game
            cout<<"Good Bye!"<<endl;
        
        else if (MenuChoice > 3)
            //display invalid
            cout<<"Invalid. Please enter a choice from the menu.\n"<<endl;
    }
    while (MenuChoice != 3);
    
    return 0;
    
}	

