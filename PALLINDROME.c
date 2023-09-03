#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int rev=0,rem,num,temp;
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if (rev==temp)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not pallindrom");
    }
    getch();
}