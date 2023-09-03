#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int sum=0,rem,num,temp;
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Amstrong number" );
    }
    else
    {
        printf("Not Amstrong");
    }
     getch();
}