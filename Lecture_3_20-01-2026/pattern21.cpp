#include <iostream>
using namespace std;
int main()
{
    int n,row,col,space;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(space=1;space<=2*(n-row);space++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}