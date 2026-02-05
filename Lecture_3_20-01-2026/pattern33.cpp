#include <iostream>
using namespace std;
int main()
{
    int n,row,space,no;
    cout<<"Enter elements: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        {
            cout<<"  ";
        }
        for(no=1;no<=2*row-1;no++)
        {
            cout<<no<<" ";
        }
        cout<<endl;
    }

}