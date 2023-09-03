#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c=0;
    clrscr();
    while(c<50)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
}