#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any integer number please: ";
    cin>>num;

    if(num>0)
    {
        cout<<"Positive";
    }
    else if(num<0)
    {
        cout<<"Negative";
    }
    else if(num==0)
    {
        cout<<"Zero";
    }

    getch();
}
