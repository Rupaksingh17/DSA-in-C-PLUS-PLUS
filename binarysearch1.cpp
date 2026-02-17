#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,7,8,9};
    int start=0,end=4;
    int target=7;
    while(start<end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        cout<<"Got it";
        break;
    }
    else if(arr[mid]<target)
    {
    start=mid+1;
    }
      else
    {
       end=mid-1;
}
}
}