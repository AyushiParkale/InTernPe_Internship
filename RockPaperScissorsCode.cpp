#include<iostream>
#include<cstdlib>  //rand function
#include<ctime> //time

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;
int main()
{
    srand((unsigned int)time(NULL));

    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do
    {
        cout<<"Select Your Throw"<<endl;
        cout<<"1) Rock"<<endl;
        cout<<"2) Paper"<<endl;
        cout<<"3) Scissors"<<endl;
        cout<<"Selectiom: ";
        cin>>player_throw;

        cout << endl;

        ai_throw = (rand() % 3) + 1;
        //rand() -> 0-999999   %3   this modules will give us the random int (remainder) between 0-2 + 1 -> 1-3 
        // eg: 10/3 = 1
        // 11/3 = 2
        // 12/3 = 0
        // 13/3 = 1

        if(ai_throw == ROCK)
        {
            cout<< "AI throw ROCK"<<endl;
        }
        else if (ai_throw == PAPER)
        {
            cout<< "AI throw PAPER"<<endl;
        }
        else if (ai_throw == SCISSORS)
        {
            cout<< "AI throw SCISSORS"<<endl;
        }


        draw = false;

        if(player_throw == ai_throw)
        {
            draw = true;
            cout <<"DRAW! Play again!"<< endl;
        }
        else if (player_throw == ROCK && ai_throw == SCISSORS)
        {
            cout<<"ROCK beats SCISSORS! You Win!"<< endl;
        }
         else if (ai_throw == ROCK && player_throw == SCISSORS)
        {
            cout<<"ROCK beats SCISSORS! You lost!"<< endl;
        }

         else if (player_throw == SCISSORS && ai_throw == PAPER)
        {
            cout<<"SCISSORS beats PAPER! You Win!"<< endl;
        }
         else if (ai_throw == SCISSORS && player_throw == PAPER)
        {
            cout<<"SCISSORS beats PAPER! You lost!"<< endl;
        }

         else if (player_throw == PAPER && ai_throw == ROCK)
        {
            cout<<"PAPER beats ROCK! You Win!"<< endl;
        }
         else if (ai_throw == PAPER && player_throw == ROCK)
        {
            cout<<"PAPER beats ROCK! You lost!"<< endl;
        }

        cout << endl;
        

    }while (draw);
    //rock beats scissors
    //scissors beats paper
    //paper beats rock



    return 0;
}