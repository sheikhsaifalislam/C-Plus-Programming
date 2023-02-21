#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    if(mark>32)
    {
        if(mark>=80)
        {
            cout<<"Your result is: A+";
        }
        else if(mark>=70)
        {
            cout<<"Your result is: A";
        }
        else if(mark>=60)
        {
            cout<<"Your result is:B";
        }
        else if(mark>=50)
        {
            cout<<"Your result is: C";
        }
        else if(mark>=40)
        {
            cout<<"Your result is: D";
        }
        else if(mark=33)
        {
            cout<<"Your result is: TTP!!";
        }
    }
    else
    {
        cout<<"Fail"<<endl;
    }


    getch();
}
