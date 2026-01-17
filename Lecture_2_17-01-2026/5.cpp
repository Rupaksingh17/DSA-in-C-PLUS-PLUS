#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b)
    {
        cout<<a;
    }
    else if(b>c)
    {
        cout<<b;
    }
    else if(c>a)
    {
        cout<<c;
    }
}