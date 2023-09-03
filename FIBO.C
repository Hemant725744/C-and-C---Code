#include<stdio.h>
#include<conio.h>
int fibo (int);
void main ()
{
    int i,n;
    clrscr ();
    printf("Enter number of term = ");
    scanf("%d",&n);
    printf("Fibonacci Series =");
    for(i=0;i<n;i++)
    {
    printf("%d",fibo(i));
    }
    getch();
}

int fibo(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    return fibo(i-1)+fibo(i-2);
}







