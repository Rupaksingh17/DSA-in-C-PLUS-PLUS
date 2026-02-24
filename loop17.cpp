#include <iostream>
using namespace std;
int main()
{
    int unit;
    cout<<"Enter the unit: ";
    cin>>unit;
    if(unit<=100)
    {
        cout<<(unit*1);
    }
    else if(unit<=200)
    {
        cout<<(100*1) + (unit-100)*2;
    }
   else  if(unit<=300)
    {
        cout<<(100*1+100*2)+(unit-200)*3;
    }
}