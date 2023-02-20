/* Here i will try to do some code using showpoint, noshowpoint, setprecision,
fixed, setw()*/


#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1, num2;

    cout<<"Enter two numbers: ";
    cin>> num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum = num1 + num2;
    cout<<setw(20)<<"Summation is: "<<sum<<endl;

    float sub = num1 - num2;
    cout<<setw(20)<<"Subtraction is: "<<sub<<endl;

    float mul = num1 * num2;
    cout<<setw(20)<<"Multiplication is: "<<mul<<endl;

    double div = (float)num1 / num2; //type casting
    cout<<setw(20)<<"Division is: "<<div<<endl;

    //float rem = num1 % num2;
    //cout<<"Reminder is: "<<rem<<endl;

    getch();
}

