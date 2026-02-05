#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==col||col==(n-row+1))
            cout<<"*";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
