#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100],temp[100];
    clrscr();
    printf("Enter string = ");
    gets(str);
    strcpy(temp,str);
    strrev(str);
    if(strcmp(str,temp)==0)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not pallindrome");
    }
    getch();
}