#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();// to use n directly 

    vector<int> next(n);// for next smaller element
    vector<int> prev(n);// for next larger element

    stack<int> st; // for calculation, not for storing
    st.push(n);

    for(int i=n-1;i>=0;i--)
    {
        while(st.top()!=n && heights[i]<=heights[st.top()])
        st.pop();

        next[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++)
    cout<<next[i]<<endl;
    cout<<endl;
    stack<int> s;
    s.push(-1);

    for(int i=0;i<n;i++)
    {
        while(s.top()!=-1 && heights[i]<=heights[s.top()])
        s.pop();

        prev[i]=s.top();
        s.push(i);
    }
    for(int i=0;i<n;i++)
    cout<<prev[i]<<endl;
    cout<<endl;
    int temp,max=0;
    for(int i=0;i<n;i++)
    {
        next[i]=next[i]-prev[i]-1;
        temp=next[i]*heights[i];
        if(max<temp)
        max=temp;
    }

    return max;
}

int main()
{
    vector<int> v;

    int temp;
    cin>>temp;
    do
    {
        v.push_back(temp);
        cin>>temp;
    } while (temp>0);
    
    cout<<"The largest area is = "<<largestRectangleArea(v)<<endl;
    return 0;
}