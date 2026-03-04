#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int start=1,end=n-2,mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
        cout<<mid;
        break;
        }
        else if(arr[mid]>arr[mid-1])
        start=mid+1;
        else
        end=mid-1;
        }
}