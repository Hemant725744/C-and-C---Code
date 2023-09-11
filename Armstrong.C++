#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int sum=0,num,rem,temp;
cout<<"Enter a number";
cin>>num;
temp=num;
while(num>0)
{
    rem=num%10;
    sum = sum + pow(rem,3);
    num = num/10;
}
if (temp==sum)
{
    cout<<"Armstrong Number";
}
else
{
    cout<<"Not Armstrong Number";
}
}
