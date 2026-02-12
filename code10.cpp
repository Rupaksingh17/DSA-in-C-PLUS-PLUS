#include <iostream>
using namespace std;
int main()
{
    int size,i,target;
    cout<<"Enter the SIZE:";
    cin>>size;
    cout<<"Enter the target";
     cin>>target;
    int arr[size];
    for(i=0;i<size;i++)
    {
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    for(i=0;i<size;i++)
    {
        if(target==arr[i])
        cout<<arr[i]<<" ";
    }
}