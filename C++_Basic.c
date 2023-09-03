/*#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	for (int i = 1;i<=10;i++)
	{
		if(i==5)
			continue;
		cout<<i<<endl;
	}
	cout<<"I am outside for";
	getch();
}*/

/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1;
	switch (i)
	{
		case 1 :
			cout<<i;
			break;
		case 2:
			cout<<i;
			break;
		default :
			 cout<<"Invalid ";
			 break;
	}
getch();
}*/

/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char vote;
	cout<<"****** Enter Your Vote ******";
	cout<<"\nA . Leader 1 \nB . Leader 2"<<endl;
	cin>>vote;
	switch (vote)
	{
		case 'A' :
			  cout<<"You vote to leader 1";
			  break;
		case  'B':
			 cout<<"You vote to leader 2";
			 break;
		default :
			 cout<<"No Leader found ";
			 break;
	}
getch();
}
*/

/*
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int emp[]={10,20,30,40};
	for (int i=0;i<4;i++)
	{
		cout<<emp[i]<<endl;
	}
	getch();
} */

/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int a[]={2,3,6,8,11,13,14,20};
	cout<<"	   Even   "<<endl;
	for (i=0;i<8;i++)
	{

		if  (a[i]%2==0)
		{
			cout<<"Even = "<<a[i]<<endl;
		}
	}
	cout<<"	  Odd	 "<<endl;
	for (i=0;i<8;i++)
	{

		if  (a[i]%3==0)
		{
			cout<<"Odd= "<<a[i]<<endl;
		}
	}
	getch();
}
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],i;
	cout<<"Enter the marks "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter subject "<<i+1<<" marks"<<endl;
		cin>>a[i];
	}
	cout<<"All subject marks is "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Subject "<<i+1<<" marks"<<a[i]<<endl;
	}
	getch();
}
