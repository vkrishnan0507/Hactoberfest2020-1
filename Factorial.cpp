#include<iostream.h>
#include<conio.h>

void main()
{
int i, no, fact=1;
clrscr(); //to clear the console
cout<<"Enter the any no. : ";
cin>>no;
for(i=1;i<=no;i++) //loop for calculating factorial(if you have entered 4, then 4=4*1 
{
fact=fact*i;
}
cout<<"Factorial: "<<fact;
getch();
}
