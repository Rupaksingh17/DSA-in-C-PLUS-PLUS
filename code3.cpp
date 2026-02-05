 #include <iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            count++;
        }
    }
    cout << endl;
    if (count == 2)
        cout << "The number is Prime";
    else
        cout << "The number is Not Prime";
}