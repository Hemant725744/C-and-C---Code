#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("\t\t\tLeft allign\n") ;
/*
1
22
333
4444
55555*/
for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
   {
    printf("%d\t",i);
   }
  printf("\n");
 }

 printf("\n");

/*
12345
1234
123
12
1*/
for(i=5;i>=1;i--)
 {
  for(j=1;j<=i;j++)
   {
    printf("%d\t",j);
   }
  printf("\n");
 }

/*
1
21
123
4321
12345*/
printf("\n");
for (i=1;i<=5;i++)
 {
  if(i%2==1)
   {
    for(j=1;j<=i;j++)
     {
      printf("%d\t",j);
     }
    }
else
 {
  for(j=i;j>=1;j--)
   {
    printf("%d\t",j);
   }
  }
  printf("\n");
 }
 printf("\n");
/*
1
21
321
4321
54321
*/

 for (i=1;i<=5;i++)
 {
  for(j=i;j>=1;j--)
   {
    printf("%d\t",j);
   }
    printf("\n");
 }
 printf("\n");

/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15*/
 int c=1;
 for(i=1;i<=5;i++)
  {
   for (j=1;j<=i;j++)
    {
    printf("%d\t",c);
    c++;
    }
   printf("\n");
  }
 printf("\n");
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1*/

for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
   {
    printf("%d\t",j%2);
   }
  printf("\n");
 }

printf("\n");

/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1*/

for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
   {
    printf("%d\t",i%2);
   }
  printf("\n");
 }

printf("\n");
/*
A
BB
CCC
DDDD
EEEEE
*/
char p,q,r;
for(p='A';p<='E';p++)
 {
  for(q='A';q<=p;q++)
   {
    printf("%c\t",p);
   }
  printf("\n");
 }

printf("\n");
/*
A
AB
ABC
ABCD
ABCDE



*/

for(p='A';p<='E';p++)
 {
  for(q='A';q<=p;q++)
   {
    printf("%c\t",q);
   }
  printf("\n");
 }
printf("\n");
/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
int d=1;
 for(i=1;i<=5;i++)
  {
   for (j=1;j<=i;j++)
    {
    printf("%d\t",d%2);
    d++;
    }
   printf("\n");
  }
 printf("\n");

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
int e=1;
 for(i=1;i<=5;i++)
  {
   for(j=i;j>=1;j--)
   {
   printf("%d\t",j%2);

   }
   printf("\n") ;
  }


getch();
}