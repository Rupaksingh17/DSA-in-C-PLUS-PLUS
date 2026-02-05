#include <iostream>
using namespace std;
int main()
{
    int n,row,col,space;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(space=n-row;space>=0;space--)
        {
            cout<<"   ";
        }
        for(col=n;col>=row;col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
       for(row=n-1;row>=1;row--)
    {
        for(space=n-row;space>=0;space--)
        {
            cout<<"  ";
        }
        for(col=row;col<=n;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
