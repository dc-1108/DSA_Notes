#include<iostream>
#include<stack>
#include<vector>
#include<map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> mp;
    stack<int> s;
    s.push(-1);
    int n=nums2.size();
    vector<int> ans(nums1.size());
    for(int i=n-1;i>=0;i--)
    {
        while(s.top()!=-1 && nums2[i]>s.top())
        s.pop();

        mp[nums2[i]]=s.top();
        s.push(nums2[i]);
    }
    for(int i=0;i<nums1.size();i++)
    ans[i]=mp[nums1[i]];
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n),b(m);

    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];

    vector<int> ans=nextGreaterElement(a,b);
    
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}