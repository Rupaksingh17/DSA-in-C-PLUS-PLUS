#include <iostream>
using namespace std;
int main()
{
    int n,row,col,space;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=0;row<=n;row++)
    {
        for(space=1;space<row*3;space++)
        {
            cout<<"  ";
        }
        for(col=n;col>row;col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}