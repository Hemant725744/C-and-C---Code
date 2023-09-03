#include<stdio.h>
#include<conio.h>
int fab (int,int,int);
void main()
{
    int a=0,b=1,c,n;
    clrscr();
    printf("%d %d",a,b);
    c=fab(a,b,c)
    printf("Answer = %d",c);
    getch();
}
 int fab (int a,b,c,n)
    {
        if(n<0)
        {
            return c;
        }
        return fab(c=a+b);
    }