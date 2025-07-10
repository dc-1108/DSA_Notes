#include<iostream>

using namespace std;

int climbStairs(int arr[], int n) {
    int a=0,b=0,c=0;
    for(int i=2;i<=n;i++)
    {
        c=min(a+arr[i-2],b+arr[i-1]);
        a=b;
        b=c;
    }
    return c;
}

int main()
{
    int n;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<climbStairs(arr,n)<<endl;
    return 0;
}