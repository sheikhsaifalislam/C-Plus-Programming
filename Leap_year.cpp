#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int L;
    cout<<"Enter any year: ";
    cin>>L;

    if(L%4==0 && L%100!=0)
    {
        cout<<"Leap year!";
    }
    else if(L%400==0)
    {
        cout<<"Leap year!";
    }
    else
    {
        cout<<"Not leap year!";
    }
}
