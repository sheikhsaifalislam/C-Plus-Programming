#include<iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout<<"Enter two numbers: ";
    cin>> num1>>num2;

    int sum = num1 + num2;
    cout<<"Summation is: "<<sum<<endl;

    int sub = num1 - num2;
    cout<<"Subtraction is: "<<sub<<endl;

    int mul = num1 * num2;
    cout<<"Multiplication is: "<<mul<<endl;

    double div = (float)num1 / num2; //type casting
    cout<<"Division is: "<<div<<endl;

    int rem = num1 % num2;
    cout<<"Reminder is: "<<rem<<endl;
}
