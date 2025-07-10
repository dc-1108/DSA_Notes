#include<iostream>
#include<vector>

using namespace std;

int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return nums[0];
    int a=nums[0];
    int b=nums[0]>nums[1]?nums[0]:nums[1];
    int temp=0;
    for(int i=2;i<n;i++)
    {
        temp=nums[i]-nums[i-1];
        if(temp<0) temp=0;
        if((a+nums[i])>(b+temp))
        {
            temp=b;
            b=a+nums[i];
            a=temp;
        }
        else
        {
            a=b;
            b=b+temp;
        }
    }
    return b;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    cout<<rob(v);
}
