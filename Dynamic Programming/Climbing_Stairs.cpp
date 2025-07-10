#include<iostream>

using namespace std;

int climbStairs(int n) {
    int a=1,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(i==1) a=1;
    }
    return c;
}

int main()
{
    int n;

    cin>>n;

    cout<<climbStairs(n)<<endl;
    return 0;
}