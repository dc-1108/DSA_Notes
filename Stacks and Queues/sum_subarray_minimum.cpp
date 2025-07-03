#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
    int n=arr.size();
    vector<int> next(n);
    vector<int> prev(n);
    stack<int> st;
    st.push(n);
    for(int i=n-1;i>=0;i--)
    {
        while(st.top()!=n && arr[st.top()]>arr[i])
        st.pop();

        next[i]=st.top();
        st.push(i);
    }

    stack<int> s;
    s.push(-1);
    for(int i=0;i<n;i++)
    {
        while(s.top()!=-1 && arr[s.top()]>=arr[i])
        s.pop();

        prev[i]=s.top();
        s.push(i);
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        next[i]=next[i]-prev[i]-1;
        prev[i]=i-prev[i]-1;
        sum=(long long int)arr[i]*(prev[i]+1)*(next[i]-prev[i]) + sum;

    }
    return sum% 1000000007;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<sumSubarrayMins(v)<<endl;
    return 0;
}
