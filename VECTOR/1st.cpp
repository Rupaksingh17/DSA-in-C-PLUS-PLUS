#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v;
   v.push_back(2);
   v.push_back(4);
   v.push_back(7);
    v.push_back(8);
   v.push_back(9);
   cout<<"Size of v: "<<v.size()<<endl;
      cout<<"Capacity of v: "<<v.capacity()<<endl;
      //update value;
}