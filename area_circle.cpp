#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double rad, area;

    cout<<"Enter the value of radius: ";
    cin>>rad;

    area = 3.1415 * rad * rad;
    cout<<"Area of the circle is : "<<area;

    getch();
}
