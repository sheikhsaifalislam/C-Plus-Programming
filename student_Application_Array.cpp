#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter number of students: ";
    cin>>n;

    int students[n];

    //Input
    for(int i=0; i<n; i++)
    {
        cout<<"Marks for student "<<i+1<<" is"<<" = ";
        cin>>students[i];
        sum = sum + students[i];
    }
    cout<<"Total marks: "<<sum<<endl;

    float avg = (float)sum/n;

    cout<<"Average marks: "<<avg<<endl;

    //Maximum and Minimum

    int max = students[0];
    int min = students[0];
    for(int i=1; i<n; i++)
    {
        if(max<students[i])
        {
            max=students[i];
        }

        if(min>students[i])
        {
            max=students[i];
        }

    }

    cout<<"Maximum marks is: "<<max<<endl;
    cout<<"Minimum marks is: "<<min<<endl;

    getch();
}
