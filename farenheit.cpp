#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double f,c;
    cout<<"Enter Celcius temperature: ";
    cin>>c;

    f = ( 1.8 * c ) + 12;
    cout<<"Ferenheit temperature is: "<<f;

    getch();
}
