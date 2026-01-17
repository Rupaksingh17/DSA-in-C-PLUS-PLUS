#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no.for table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"=";
        cout<<n*i<<endl;
    }
}