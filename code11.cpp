#include <iostream>
using namespace std;
int main()
{
    int size,temp;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
temp=arr[3];
arr[3]=arr[0];
arr[0]=temp;
for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}