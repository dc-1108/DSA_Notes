#include<iostream>
#include<stack>
#include<vector>
using namespace std;

bool celebrity(vector<vector<int>> &v,int n)
{
    stack<int> s;
    for(int i=0;i<n;i++)
    s.push(i);

    while(s.size()>1)
    {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(v[a][b]==1 && v[b][a]==0)
        s.push(b);
        if(v[a][b]==0 && v[b][a]==1)
        s.push(a);
    }
    if(s.empty())
    return false;
    else return true;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<celebrity(arr,n)<<endl;
    return 0;
    // brute force method

    /*
    int n;
    cin>>n;
    int arr[n][n];
    bool check[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        check[i] = true;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i || (arr[j][i]==1 && arr[i][j]==0))
            continue;
            else
            {
                check[i]=false;
                break;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(check[i])
        count++:
    }
    cout<<count<<endl;  
    return 0;

    */

}