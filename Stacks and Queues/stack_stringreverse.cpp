#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<char> st;
    
    string s;
    cin>>s;
    string r="";
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++)
    {
        r=r+st.top();
        st.pop();
    }
    cout<<r<<endl;
    return 0;
}