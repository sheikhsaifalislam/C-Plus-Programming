#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark[5];

    //For taking input
    for(int i=0; i<5; i++)
    {
        cout<<"Marks for student "<<i+1<<" = ";
        cin>>mark[i];
    }

    //For showing output
    cout<<"Marks of the students Are: ";
    for(int i=0; i<5; i++)
    {
        cout<<mark[i]<<" ";
    }

    getch();
}
