// bad method i guess

#include<iostream>
#include<stack>

using namespace std;
int smaller(stack<int> &st, int num)
{
    if(st.empty())
    return -1;
    else
    {
        int temp=st.top();
        if(temp< num)
        return temp;
        st.pop();
        int small=smaller(st,num);
        st.push(temp);
        return small;

    }
}
void next_smaller(stack<int> &st)
{
    if(st.empty())
    return;
    else
    {
        int temp=st.top();
        st.pop();
        int next=smaller(st,temp);
        next_smaller(st);
        st.push(next);
    }
}

int main()
{
    stack<int> st;

    st.push(4);
    st.push(5);
    st.push(2);
    st.push(9);
    st.push(-6);

    next_smaller(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}