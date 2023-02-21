#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, num, c=0;
    cout<<"Enter any positive number: ";
    cin>>num;

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime Number";
    }



    getch();
}
