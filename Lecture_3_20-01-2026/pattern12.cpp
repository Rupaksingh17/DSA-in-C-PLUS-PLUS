#include <iostream>
using namespace std;
int main()
{
    int n,row,col,space;
    cout<<"enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<" ! ";
        }
        cout<<endl;
    }
}