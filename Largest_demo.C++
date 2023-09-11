#include <iostream>

using namespace std;


int main()
{
    int a,b,c,max;
    cout<<"Enter a number"<<endl;
    cin>>a>>b>>c;
    if (b>c)
        max=b;
    else
        max=c;
    if(a>max)
        max=a;
        cout<<"Largest Number is ";
        cout<<max;
   
}
