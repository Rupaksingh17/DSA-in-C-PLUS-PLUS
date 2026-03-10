#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,7,11,15,27};
   int start=0,end=4,target=38;
   while(start<=end)
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
    else{
        end--;
    }
    
   }
}