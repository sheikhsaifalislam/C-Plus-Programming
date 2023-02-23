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
};

int main()
{
    student Alim;
    Alim.id = 101;
    Alim.gpa = 3.36;
    Alim.display();


    student Karim;
    Karim.id = 105;
    Karim.gpa = 3.59;
    Karim.display();




    getch();
}

