#include <iostream>
using namespace std;

int main()
{
   int fact=1,i,num;
   cout<<"Enter number to find Factorial";
   cin>>num;

   for(i=1;i<=num;i++)
   {
        fact=fact*i;
   }
   cout<<"Factorial = "<<fact;
}
