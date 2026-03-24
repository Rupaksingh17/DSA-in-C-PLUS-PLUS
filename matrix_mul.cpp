#include <iostream>
#include <vector>
using namespace std;
int main()
{
int row1,col1,row2,col2;
cout<<"Enter Row1 and Col1";
cin>>row1>>col1;
cout<<"Enter Row2 and Col2";
cin>>row2>>col2;
if(col1!=row2)
{
    cout<<"Matrix not possible";
    return 0;
}
vector<vector<int>>a(row1, vector<int>(col1));
vector<vector<int>>b(col1,vector<int>(col2));
cout<<"Enter first matrix";
for(int i=0;i<=row1;i++)
{
    for(int j=0;j<=col1;j++)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<=row2;i++)
{
for(int j=0;j<=col2;j++)
{
    cin>>b[i][j];
}
}
vector<vector<int>>c(row1,vector<int>(col2,0));
for(int i=0;i<row1;i++){
    for(int j=0;j<col2;j++){
        for(int k=0;k<col1;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
cout<<"Result";
for(int i=0;i<row1;i++){
    for(int j=0;j<col2;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
