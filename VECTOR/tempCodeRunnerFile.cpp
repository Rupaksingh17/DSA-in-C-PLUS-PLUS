#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[6]={6,4,5,-3,2,8};
    int n;
      cin>>n;
    vector<int>p(n);
    p[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
        }

}