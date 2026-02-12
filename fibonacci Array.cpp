#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    int m,n;
    cin>>m>>n;
    arr[0]=m;
    arr[1]=n;
    for(int i=2;i<size;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}