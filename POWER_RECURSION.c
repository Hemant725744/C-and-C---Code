#include<stdio.h>
#include<conio.h>
int power (int,int);
void main ()
{
    int x,y, ans;
    clrscr();
    printf("enter the base = " );
    scanf("%d",&x);
    printf("enter the power = " );
    scanf("%d",&y);
    ans=power(x,y);
    printf("%d^%d=%d",x,y,ans);
    getch();
}
    int power (int x,int y)
    {
    if(y==1)
    {
    return x ;
    }
    return x * power(x,y-1);
}