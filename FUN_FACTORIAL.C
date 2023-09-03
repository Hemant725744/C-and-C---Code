 #include<stdio.h>
 #include<conio.h>
 int add(int , int);
 void main()
 {
 int a,b,c;
 clrscr();
 printf("Enter two number");
 scanf("%d %d",&a,&b);
 c=add(a,b);
 printf("Addition is =%d",c);
 getch();
 }
 int add(int a,int b)
 {
 return a+b;
 }