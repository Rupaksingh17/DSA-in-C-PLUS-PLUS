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
            cout<<"  ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
    }
}