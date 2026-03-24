#include <iostream>
#include <vector>
using namespace std;
int main(){
int rows;
cout<<"rows";
cin>>rows;
int cols;
cout<<"cols";
cin>>cols;
vector<vector<int>>matrix(rows,vector<int>(cols));
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cin>>matrix[i][j];
    }
}
vector<int>ans;
int left=0,right=cols-1;
int top=0,bottom=rows-1;
while(top <=bottom && left<=right)
{
    for(int i=left;i<=right;i++)
    {
        ans.push_back(matrix[top][i]);
    }
    top++;
}
for(int i=top;i<=bottom;i++)
{
    ans.push_back(matrix[i][right]);
}
right--;
if(top<=bottom)
{
    for(int i=right;i>=left;i--)
    {
        ans.push_back(matrix[bottom][i]);
    }
    bottom--;
}
if(left<=right)
{
    for(int i=bottom;i>=top;i--)
    {
        ans.push_back(matrix[i][left]);
    }
    left++;
}
cout<<"Spiral order";
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}