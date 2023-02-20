#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;

    if(num1>num2)
    {
        cout<<num1<<" Is greater";
    }
    else
    {
        cout<<num2<<" Is greater";
    }

    getch();
}
