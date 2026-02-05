  #include <iostream>
using namespace std;
int main()
{
    int row,col,space;
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}