#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,c=0;
    clrscr();
    printf("Enter any number = ");
    scanf("%d",&num);

    for (i=2;i<num;i++)
    {
      if(num%i==0)
      {
        c++;
      }
    }
    if (c==0)
    printf("Prime number");
    else
      printf(" Not Prime");
    getch();
}