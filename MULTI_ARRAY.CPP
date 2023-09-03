/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	int a[3][3]={{10,20,30},{10,20,30},{10,20,30}};
	int b[3][3]={{10,20,30},{10,20,30},{10,20,30}};
	int c[3][3];
	cout<<"First Matrix"<<endl;
	//Printing First Matrix
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<endl;
	}
	cout<<"Second Matrix"<<endl;
	//Printing Second Matrix
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<b[i][j]<<"\t";
		}
	cout<<endl;
	}
	cout<<"Addition of matrix"<<endl;
	//Printing addtion of both the Matrix
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			if(c[i][j]%2==0)
			{
				cout<<"Even"<<c[i][j]<<"\t";
			}
			else
			{
				cout<<"Odd"<<c[i][j]<<"\t";
			}
		}
	cout<<endl;
	}


	getch();
} */

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	a:
	int age;
	cout<<"Enter age = "<<endl;
	cin>>age;
	if(age>18)
		cout<<"Eligiable"<<endl;
	else
		{
		cout<<"Cant vote"<<endl;
		goto a;
		}
	getch();
}