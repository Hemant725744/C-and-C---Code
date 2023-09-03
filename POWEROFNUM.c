#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,i,ans=1;
    clrscr();
    printf("Enter x ");
    scanf("%d",&x);
    printf("Enter y ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        ans=ans*x;
    }
    printf("Answer = %d",ans);
    getch();

}