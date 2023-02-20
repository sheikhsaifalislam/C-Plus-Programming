#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a random number:";
    cin>>num;

    if(num%2==0)
    {
        cout<<num<<" is an even number!";
    }
    else
    {
        cout<<num<<" is an odd number.";
    }

    getch();
}
