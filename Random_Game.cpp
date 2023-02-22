#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{

    int guessNumber, randomNumber;

    cout<<"Enter your guess between 1 to 5: ";
    cin>>guessNumber;

    randomNumber = 1+ rand()%5;

    if (guessNumber==randomNumber)
    {
        cout<<"You have won!"<<endl<<endl;
    }
    else
    {
         cout<<"You have lost. Try again later."<<endl;
         cout<<"Random number was: "<<randomNumber<<endl<<endl;
    }

    getch();
}
