/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int marks;
	cout<<"Enter your marks";
	cin>>marks;
	if (marks<=100 && marks>=75)
	{
		cout<<"A +";
	}
	else if (marks<75 && marks>=65)
	{
		cout<<"A";
	}
	else if (marks<65 && marks>=55)
	{
		cout<<"B";
	}
	else if (marks<55 && marks>=35)
	{
		cout<<"C";
	}
	else
	{
		cout<<"FAIL";
	}
	getch();
} */


#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float a=3.64;
	cout<<"Absolute value = "<<abs(a)<<endl;
	cout<<"Ceil value = "<<ceil(a)<<endl;
	cout<<"Floor value = "<<floor(a)<<endl;
	cout<<"Power = "<<pow(a,2)<<endl;
	cout<<"square root value = "<<sqrt(a)<<endl;
	getch();
}

