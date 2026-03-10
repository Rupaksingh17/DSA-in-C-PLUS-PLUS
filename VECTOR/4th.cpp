#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vdel;
    vdel.push_back(9);
    vdel.push_back(8);
    vdel.push_back(7);
    vdel.push_back(6);
    vdel.push_back(5);
    vdel.push_back(4);
    vdel.pop_back();
    cout<<"Size: "<<vdel.size()<<endl;
        cout<<"Capacity: "<<vdel.capacity()<<endl;
        //beech ka koi value agar hatana ho to
        vdel.erase(vdel.begin()+2);
         cout<<"Size: "<<vdel.size()<<endl;
        cout<<"Capacity: "<<vdel.capacity()<<endl;
        vdel.erase(vdel.begin()+0);
         cout<<"Size: "<<vdel.size()<<endl;
        cout<<"Capacity: "<<vdel.capacity()<<endl;
        vdel.push_back(44);
         cout<<"Size: "<<vdel.size()<<endl;
        cout<<"Capacity: "<<vdel.capacity()<<endl;
        cout<<"Final Vector: ";
         for(auto i=0;i<vdel.size();i++)
        cout<<vdel[i]<<endl;

        //agar koi particular index par koj specifc valur print karani ho toh
        vdel.insert(vdel.begin()+1,93);
         for(auto i=0;i<vdel.size();i++)
        cout<<vdel[i]<<" "<<endl ;
        
        vdel.insert(vdel.begin()+3,88);
         for(auto i=0;i<vdel.size();i++)
        cout<<vdel[i]<<" "<<endl;
        vdel.clear();
         cout<<"Size: "<<vdel.size()<<endl;
        cout<<"Capacity: "<<vdel.capacity()<<endl;
}