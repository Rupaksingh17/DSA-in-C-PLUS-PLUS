#include <iostream>
using namespace std;
int main()
{
    int arr[5]={7,4,8,5,3};
    int i,j;
    for(i=3;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
         for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}