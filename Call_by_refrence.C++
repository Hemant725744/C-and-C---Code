#include<iostream>
using namespace std;
void swap (int*,int*);  //function declaration
int main()
{
    int a,b;
    cout<<"Enter value of a ";
    cin>>a;
    cout<<"Enter value of b ";
    cin>>b;
    swap(&a,&b);        //call by reference
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}

void swap(int*a , int*b)      //function definition
{
    int t;         //assing the value at address a to t
    t=*a;          //put the value of b into a 
    *a=*b;         //put the value at t into b 
    *b=t;
}