#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(62);
     a.push_back(52);
      a.push_back(42);
       a.push_back(32);
        a.push_back(22);
         a.push_back(12);
         //sort in increasing order
         //sort(a.begin(),a.end());

         //sort in decresing order
        sort(a.begin(),a.end(),greater<int>()); 
        //2ndtarika for decreasing order
        sort(a.rbegin(),a.rend());

        ///search in binary search
        cout<<binary_search(a.begin(),a.end(),22);
        //agar 22 hoga to print kardega nhi to nhi karega

        //
}