#include<iostream>
#include<conio.h>
using namespace std;

void additon(int,int );
void subtraction(int,int );
void Multiplication(int,int );
void Division(int,int );




int main()
{
    //Function call
    additon(10,20);
    subtraction(20,10);
    Multiplication(5,3);
    Division(50,10);

    cout<<"All functions are called!!";

    getch();
}

void additon(int a, int b)
{
    int sum = a+b;
    cout<<"Summation is: "<<sum<<endl;
}

void subtraction(int a, int b)
{
    int subtraction = a-b;
    cout<<"Subtraction is: "<<subtraction<<endl;
}
void Multiplication(int a, int b)
{
    int Multiplication = a*b;
    cout<<"Multiplication is: "<<Multiplication<<endl;
}
void Division(int a, int b)
{
    int Division = a/b;
    cout<<"Division is: "<<Division<<endl;
}
