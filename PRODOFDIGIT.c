#include<stdio.h>
#include<conio.h>
void main()
{
    int product=1,rem,num;
    clrscr();
    printf("Enter a number = ");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        product=product*rem;
        num=num/10;
    }
    printf("Product = %d",product);
    getch();
}