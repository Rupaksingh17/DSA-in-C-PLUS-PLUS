 #include <iostream>
using namespace std;

int main()
{
    int arr[5]={3,7,8,11,25};
    int start=0,end=1;
    int target=56;

    while(start<5)
    {
        if(end>=5)
        {
            start++;
            end=start+1;
            continue;
        }

        if(arr[start]*arr[end]==target)
        {
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else
        {
            end++;
        }
    }
}