#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[20];int len;
    clrscr();
    printf("Enter the string s1");
    gets(s1);
    len=strlen(s1);
    printf("length of the string is %d",len);
    getch();
}