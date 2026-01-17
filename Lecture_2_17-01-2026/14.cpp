#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    if(n>=200&&n<=280)
    {
        cout<<"The prize is kurkure";
    }
    else if(n>=300&&n<=460)
    {
        cout<<"The prize is macbook";
    }
    else if(n>=1100&&n<=1500)
    {
        cout<<"The prize is cycle";
    }
    else if(n>=50&&n<=80)
    {
        cout<<"The prize is Bike";
    }
    else{
        cout<<"Better luck next time";
    }
}