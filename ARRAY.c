/*SMALLEST NUMBER IN ARRAY

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i,small,pos;
  clrscr();
  printf("Enter the element of array = ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("Enter element a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  small=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]<small)
    {
      small=a[i];
      pos=i;
    }
  }
  printf("Smallest number = %d and pos = %d",small,pos);
  getch();
} */

/*LARGEST NUMBER IN ARRRAY

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i,large,pos;
  clrscr();
  printf("Enter the element of array = ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("Enter element a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  large=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>large)
    {
      large=a[i];
      pos=i;
    }
  }
  printf("Largest number = %d and pos = %d",large,pos);
  getch();
} */

/*SECOND LARGEST NUM IN ARRAY

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i,large,second_large,pos;
  clrscr();
  printf("Enter the element of array = ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("Enter element a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  large=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>large)
    {
      large=a[i];
    }
  }
  second_large=a[1];
  for(i=1;i<n;i++)
  {
    if(a[i]!=large)
    {
      if(a[i]>second_large)
      {
        second_large=a[i];
        pos=i;
      }
    }
  }
  printf("Second largest number = %d and pos = %d",second_large,pos);
  getch();
}
*/

/*FIND DUPLICATE OF NUMBER

#include<stdio.h>
#include<conio.h>
void main ()
{
  int i,j,n,a[20],flag=0;
  clrscr();
  printf("Enter the number of element =");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter element a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {  
      if (a[i]==a[j]&&i!=j)
      {
        flag=1;
        printf("\nDuplication number found at location %d and %d",i,j);
      }
    }
  }
  if(flag==0)
  {
    printf("No duplicates found");
  }
  getch();
} */

/*INSERTION AT PARTICULAR POSITION

#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,num,a[20],pos;
  clrscr();
  printf("Enter the no of element ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  printf("Enter the number to insert = ");
  scanf("%d",&num);
  printf("Enter the position at which number to insert = ");
  scanf("%d",&pos);

  for (i=n-1;i>=pos;i--)
  {
    a[i+1]=a[i];
  }
  a[pos]=num;
  n=n+1;
  printf("Array after inserction = %d",num);
  for(i=0;i<n;i++)
  {
    printf("\n%d",a[i]);
  }
  getch();
} */
