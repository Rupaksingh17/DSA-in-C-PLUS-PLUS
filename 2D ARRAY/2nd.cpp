#include <iostream>
using namespace std;
int main()
{
    int x=7;
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(arr[row][col]==x)
            {
                cout<<"YES";
                return 0;
                
            }
        }
    }
    cout<<"NO";
}