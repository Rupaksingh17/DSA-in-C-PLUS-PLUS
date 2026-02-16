#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,6,8,5};
    swap(arr[4],arr[2]);
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i];
    }
}