#include<iostream>
#include<string.h>
 
using namespace std;

int main()
{
    char s1[] = "Hemant";
    char s2[] = "Om";

    if(strcmp(s1,s2)<0)
    cout<<s1<<"<"<<s2<<endl;
    else
    cout<<s1<<">="<<s2<<endl;

}