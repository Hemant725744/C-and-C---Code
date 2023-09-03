#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    printf("Enter any character ");
    scanf("%c",&a);

    if (a>='a'&& a<='z')
    {
        printf("Lower case =%c ",a);
    }
    else if (a>='A'&& a<='Z')
        printf("Uppar case =%c ",a);
    else if (a>='0'&& a<='9')
        printf("Number =%c ",a);
    else
        printf("special character =%c ",a);
    getch();

}

