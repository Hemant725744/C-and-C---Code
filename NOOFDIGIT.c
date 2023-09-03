#include<stdio.h>
#include<conio.h>
void main()
{
    int rem,num,i=0;
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&num);

    while(num>0)
    {
        num=num/10;
        i++;
    }
    printf("Sum of digit is = %d",i);
    getch();
}