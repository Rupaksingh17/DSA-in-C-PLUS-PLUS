#include <iostream>
using namespace std;
int main()
{
    int arr[3][4]={12,13,14,15,16,17,18,19,21,23,25,26};
    int sum=0,index=-1;
     for(int row=0;row<3;row++){
        int total=0;
        for(int col=0;col<4;col++){
            total += arr[row][col];
        }
        cout<<total<<endl;
        if(sum<total)
        {
            sum=total;
            index=row;
        }
     }
     cout<<index;
}