#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    if (mark> 100)
    {
        cout<<"Invalid mark";
    }
   else if (mark< 0)
    {
        cout<<"Invalid mark";
    }
    else if(mark>=80)
    {
        cout<<"A+";
    }
     else if(mark>=70)
    {
        cout<<"A";
    }
     else if(mark>=60)
    {
        cout<<"B";
    }
     else if(mark>=50)
    {
        cout<<"C";
    }
     else if(mark>=40)
    {
        cout<<"D";
    }
     else if(mark>=33)
    {
        cout<<"TTP";
    }
    else
    {
        cout<<"Fail";
    }
    getch();
}
