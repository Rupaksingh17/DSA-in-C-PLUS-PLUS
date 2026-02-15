#include<iostream>
using namespace std;

int main()
{
    int arr[6]={4,7,9,8,6,5};
    int i,j,count=0;

    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }

    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<count;
}
