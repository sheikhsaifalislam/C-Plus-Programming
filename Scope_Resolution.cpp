/* 1. Local Variable: Inside the main function
   2. Global Variable: Outside the function
   3. "::" is the scope resolution operator

   */

#include<iostream>
#include<conio.h>
using namespace std;

int x=10; //Global Variable

/*void display()
{
    cout<<"Inside the display function X is: "<<x<<endl;
}*/

int main()
{
    int x =50; //Local Variable
    cout<<"Inside the main function X is: "<<::x<<endl;

    //display();

    getch();
}
