 #include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. for blocks: ";
    cin>>n;

    vector<int> h(n);   // ✅ FIX

    cout<<"Enter height for blocks: ";
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    int water=0;

    for(int i=1;i<n-1;i++)
    {
        int leftmax=0,rightmax=0;

        for(int j=0;j<=i;j++)
        {
            if(h[j]>leftmax)
            leftmax=h[j];
        }

        for(int j=i+1;j<n;j++)   // ✅ Slight improvement
        {
            if(h[j]>rightmax)
            rightmax=h[j];
        }

        int level=min(leftmax,rightmax);

        if(level>h[i])
        water += level-h[i];
    }

    cout<<"Trapped Water: "<<water;
}