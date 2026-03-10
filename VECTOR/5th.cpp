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
         cout<<a.front()<<endl;
         cout<<a.back()<<endl;
     

         //copy value of one vector to another vector
         vector<int>b;
         b=a;
       ///phla tarika  for(auto i=0;i<b.size();i++)
         ///cout<<b[i]<<" "<<endl;
         for(auto i: b)
         cout<<i<<" ";
}