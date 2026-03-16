#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6]={6,4,5,-3,2,8};
    int n;
    cin>>n;

    vector<int> p(n);

    p[n-1] = arr[n-1];

    for(int i=n-2;i>=0;i--)
    {
        p[i] = p[i+1] + arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}