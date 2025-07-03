#include<iostream>
#include<stack>

using namespace std;

void sort(stack<int> &st,int num)
{
    if(st.empty())
    st.push(num);
    else
    {
        int temp=st.top();
        if(temp>num)
        {
            st.pop();
            sort(st,num);
            st.push(temp);
        }
        else 
        st.push(num);
    }
}
void stacksort(stack<int> &st)
{
    if(st.empty())
    return;
    else
    {
        int temp=st.top();
        st.pop();
        stacksort(st);
        sort(st,temp);
    }
}
int main()
{
    stack<int> st;
    st.push(124);
    st.push(14);
    st.push(24);
    st.push(1);
    stacksort(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}