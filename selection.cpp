#include <iostream>
using namespace std;
int main()
{
    int arr[5]={3,4,6,1,2};
    int index=0;
    for(int i=1;i<5;i++)
    {
        if(arr[i]<arr[index])
        {
          index=i;
          break;
        }
    }
    cout<<index;
}