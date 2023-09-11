#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[]="Hemant";
    char s2[]="Bhatt";
    cout<<"Before Swaping (s1,s2)\n";
    cout<<"\t s1=["<<s1<<"],length = "<<strlen(s1)<<endl;
    cout<<"\t s2=["<<s2<<"],length = "<<strlen(s2)<<endl;
    strcpy(s1,s2);
    cout<<"After strcpy(s1,s2)\n";
    cout<<"\t s1=["<<s1<<"],length = "<<strlen(s1)<<endl;
    cout<<"\t s2=["<<s2<<"],length = "<<strlen(s2)<<endl;
}