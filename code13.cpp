#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the element size: ";
    cin>>size;
    int arr[size];
    int index=-1;
     int x;
    cout<<"Enter the number u have to find: ";
    cin>>x;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    if(arr[i]==x)
    {
        index=i;
    }
}
cout<<"The index of given elements is: "<<index;
}