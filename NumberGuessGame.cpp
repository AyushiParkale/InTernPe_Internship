//Number Guess Game
//Task 1

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand ((unsigned int) time(NULL)); //random integers that will be generated

    int Number = (rand() %100) + 1; //500 % 100 ->0,  501 % 100 -> 1, 599 % 100 ->99, 600 % 100 ->0

    int guess = 0;

// Loop until the user guesses the correct number
    do
    {
        cout<<"Enter Guess (1-100)";
        cin >> guess;

        // Check if the guess is higher, lower, or equal to the generated number
        if (guess > Number)
        cout<< "Guess lower!"<<endl; // Prompt user to guess lower
        else if (guess< Number)
        cout<<" Guess Higher!"<<endl; // Prompt user to guess higher
        else
        cout<<"You Won!!"<<endl; // Display a winning message when the guess is correct
    } 
    while (guess != Number); // Continue looping until the user's guess matches the generated number
    
    return 0;
}
