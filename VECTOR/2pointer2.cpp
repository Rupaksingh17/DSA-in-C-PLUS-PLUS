#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n];
    int start=0,end=n-1,target=20;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else
        end--;
    }
}