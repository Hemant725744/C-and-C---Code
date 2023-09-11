#include<iostream>
using namespace std;

int main()
{
    int rev=0,rem,num,temp;
    cout<<"Enter the number ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev = (rev*10) + rem;
        num = num/10;
    }

    if(temp==rev)
        cout<<"Number is pallindrome";
    else
        cout<<"Not pallindrome";
    
}