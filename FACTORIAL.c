#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,fact=1;
    clrscr();
    printf("Enter number to find factorial = ");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial is = %d",fact);
    getch();
}