/*
    Constructor is of two types.
        1. Default Constructor: No parameter.
        2. Parameterized Constructor: Have parameter.

*/
/*
    1. Constructor has no return type.
    2. Constructor's name must be the same as it's class name.
    3. You need not to call constructor it works spontaneously.
    4. Constructor is a special type of function that is used to initialize
    the object.

*/

#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;

    void display()
    {
        cout<< id << " " << gpa<<endl;;
    }
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    student()
    {
        cout<< "Default Constructor"<< endl;
    }
};

int main()
{
    student ob;

    student Alim(10, 3.50);
    Alim.display();


    student Karim(20, 3.89);
    Karim.display();




    getch();
}


