//Function name could be the same but the parameters or the data type must be different.
//This is called function overloading.

#include<iostream>
#include<conio.h>
using namespace std;

int add(int a, int b)
{
    int sum = a+b;
    cout<<"Sum is: "<<sum<<endl;
}

int add(int a, int b, int c)
{
    int sum = a+b+c;
    cout<<"Sum is: "<<sum<<endl;
}

int main()
{
    add(10,20);
    add(10,20,30);


    getch();
}
