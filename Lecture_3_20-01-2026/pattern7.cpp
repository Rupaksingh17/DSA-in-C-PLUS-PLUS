#include <iostream>
using namespace std;
int main(){
    int n,row,col;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1||col==1||row==n||col==n)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}