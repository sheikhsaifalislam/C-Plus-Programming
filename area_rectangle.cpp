#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    double base, height, area;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;

    cout<<fixed;
    cout<<setprecision(2);
    area = base * height;
    cout<<"Area of the rectangle is: "<<area;

    getch();
}
