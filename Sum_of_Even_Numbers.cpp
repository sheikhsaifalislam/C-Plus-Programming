#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"Enter the last number: ";
    cin>>n;

    for(i=2; i<=n; i=i+2)
    {
        sum = sum + i;
    }
    cout<<sum;

    getch();
}
