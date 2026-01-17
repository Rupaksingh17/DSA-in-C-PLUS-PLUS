#include <iostream>
using namespace std;
int main()
{
    int n;
    int Sum = 0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        Sum += i;
    }
    cout<<"Sum of Number : "<<Sum<<endl;

    return 0;
}