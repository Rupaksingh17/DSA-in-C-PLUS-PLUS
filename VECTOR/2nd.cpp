#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1(6,1);
    v1.push_back(7);
    cout<<"Size =:"<<v1.size()<<endl;
    cout<<"Capacity =:"<<v1.capacity();
}