#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	clrscr();
	printf("Enter two number");
	scanf("%d%d",&a,&b);

	printf("\n1.Addiion");
	printf("\n2.Subtract");
	printf("\n3.Multiplication");
	printf("\n4.Division");

	printf("Enter choice");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1 :printf("Additon=%d",a+b);
				break;
		case 2 :printf("Subraciton=%d",a-b);
				break;
		case 3 :printf("Multiplication=%d",a*b);
				break;
		case 4 :printf("Division=%d",a/b);
				break ;
		default:printf("Invalid choice");
				break;
	}
	getch();
}