#include <iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
        int index=j;
        for(int k=j+1;k<n;k++)
        {
            if(arr[k]<arr[index])
           int index=k;
        }
        swap(arr[j],arr[index]);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
    }
}