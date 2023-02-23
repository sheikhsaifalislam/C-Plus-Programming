#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;
};

int main()
{
    student Alim;
    Alim.id = 101;
    Alim.gpa = 3.36;

    cout<<"For Alim: "<< Alim.id << " " << Alim.gpa<<endl;

    student Karim;
    Karim.id = 105;
    Karim.gpa = 3.59;

    cout<<"For Karim: "<< Karim.id << " " << Karim.gpa;



    getch();
}
