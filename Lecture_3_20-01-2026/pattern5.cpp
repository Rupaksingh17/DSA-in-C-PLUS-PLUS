#include <iostream>
using namespace std;
int main()
{
    int n,row,col,space;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}