#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10];
 int r1,c1,i,j;
 clrscr();
 printf ("Enter the no of row and coloum of matrix =\n");
 scanf("%d%d",&r1,&c1);
 printf("Enter first matrix =\n");

 for (i=0;i<r1;i++)
  {
   for (j=0;j<c1;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }

  printf("Enter seconf matrix=\n");
 for (i=0;i<r1;i++)
  {
   for (j=0;j<c1;j++)
    {
    scanf("%d",&b[i][j]);
    }
  }

 printf("Multiplication is =\n");
 for (i=0;i<r1;i++)
  {
   for (j=0;j<c1;j++)
    {
     c[i][j]=(a[i][j]*b[i][j]);
     printf("\t%d",c[i][j]);
     }
    printf("\n");
  }
  getch();
  }