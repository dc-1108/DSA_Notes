#include <iostream>

#include <vector>

void recurse(int i, vector<bool> &temp, vector<vector<int>> &v) 
{
    int n = v.size();
    temp[i] = true;

    for (int i = 0; i < n; i++) 
    {
        if (v[i][i] == 1 && !temp[i])
        recurse(i, temp, v);
    }
}

int findCircleNum(vector<vector<int>>& v) 
{
    int n = v.size();
    vector<bool> temp(n, false);
    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (!temp[i])
        {
            count++;
            recurse(i, temp, v);
        }
    }

    return count;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<findCircleNum(v)<<endl;
}