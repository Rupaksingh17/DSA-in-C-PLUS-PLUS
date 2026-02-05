#include <iostream>
using namespace std;
int main()
 {
    int n1,n2,gcd=1;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2:";
    cin>>n2;
    for(int num=1;num<=n1 && num<=n2;num++)
    {
        if(n1%num==0 && n2%num==0)
        {
            gcd=num;
        }
    }
    cout<<gcd;
}