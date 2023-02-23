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
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student Alim;
    Alim.setValue(10, 3.34);
    Alim.display();


    student Karim;
    Karim.setValue(20, 3.89);
    Karim.display();




    getch();
}

