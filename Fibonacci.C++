#include <iostream>
using namespace std;

int main()
{
    int f0=0,f1=1,f,i;
    cout<<"\n"<<f0<<"\n"<<f1;
    for(i=1;i<=13;i++)
    {
        f = f0 + f1;
        cout<<"\n"<<f;
        f0=f1;
        f1=f;
    }
}
