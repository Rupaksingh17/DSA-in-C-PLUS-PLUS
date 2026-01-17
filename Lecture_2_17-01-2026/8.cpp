#include <iostream>
using namespace std;
int main()
{
    int n,add;
    cout<<"Enter the number: ";
    cin>>n;
    add=0;
    for (int i=1;i<=n;i++)
    {
        cout<<i<<endl;
        add=add+i;
        
    }
    cout<<add;
}