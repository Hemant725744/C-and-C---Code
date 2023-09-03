#include<stdio.h>
#include<conio.h>
int GCD(int,int);
void main()
{
    int x,y,res;
    clrscr();
    printf("Enter two number = ");
    scanf("%d %d",&x,&y);
    res=GCD(x,y);
    printf("RESULT=%d",res);
    getch();
}
    int GCD(int x,int y)
    {
    int rem;
    rem=x%y;
    if(rem==0)
        return y;
    else
        return (GCD(y,rem));
    }   