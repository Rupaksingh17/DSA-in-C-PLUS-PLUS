#include <iostream>
using namespace std;
int main()
{
    int gas;
        cout<<"Gas: ";
    cin>>gas;
     int gasarr[gas];
     cout<<"Cost : ";
     int costarr[gas];
    for(int i=0;i<gas;i++)
    {
        cin>>gasarr[i]>>costarr[i];
    }
    int start=0,total=0,fuel=0;
    for(int j=0;j<gas;j++)
    {
        int diff=gasarr[j]-costarr[j];
      total=total+diff;
      fuel=fuel+diff;
      if(fuel<0)
      {
        start=j+1;
        fuel=0;
      }
    }
    if(total<0)
    {
    cout<<-1;
    }
    else
    {
    cout<<start;
    }
}