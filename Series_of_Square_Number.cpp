/* Q: Find the sum of the series
 1^2 + 2^2+ 3^2+.............+n */

 #include<iostream>
 #include<conio.h>
 using namespace std;

 int main()
 {
     int i, n, sum=0;
     cout<<"Enter the last number: ";
     cin>>n;

     for(i=1; i<=n; i++)
     {
         sum = sum + i*i;
     }

     cout<<sum;

     getch();
 }
