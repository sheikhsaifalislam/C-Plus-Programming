/* Here i will try to do some code using showpoint, noshowpoint, setprecision,
fixed, setw()*/


#include<iostream>
using namespace std;
int main()
{
    float num1, num2;

    cout<<"Enter two numbers: ";
    cin>> num1>>num2;

    float sum = num1 + num2;
    cout<<"Summation is: "<<sum<<endl;

    float sub = num1 - num2;
    cout<<"Subtraction is: "<<sub<<endl;

    float mul = num1 * num2;
    cout<<"Multiplication is: "<<mul<<endl;

    double div = (float)num1 / num2; //type casting
    cout<<"Division is: "<<div<<endl;

    //float rem = num1 % num2;
    //cout<<"Reminder is: "<<rem<<endl;
}

