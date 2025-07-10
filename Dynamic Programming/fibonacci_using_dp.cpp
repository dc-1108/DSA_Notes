#include<iostream>
#include<vector>

using namespace std;

//better approach O(n) time complexity and O(1) space used
// int main()
// {
//     int n;
//     cin>>n;
//     int a=-1,b=1;
//     int c=0;

//     for(int i=1;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<"The "<<n<<"th fibonacci number = "<<c<<endl;
//     return 0;
// }

int fibonacci(int n, int dp[])
{
    if(n==1||n==2) return n-1;

    if(dp[n]!=-1) return dp[n];
    dp[n]= fibonacci(n-1,dp)+fibonacci(n-2,dp);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n+1;i++)
    {
        dp[i]=-1;
    }
    cout<<fibonacci(n,dp)<<endl;
    return 0;
}