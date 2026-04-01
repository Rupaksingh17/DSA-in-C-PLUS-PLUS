#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev = rev+s[i];
    }
    if(s==rev)
    {
        cout<<"Yes It Is Pallindrome";  }
    else{
        cout<<"No It Is Not Pallindrome";
    }

}