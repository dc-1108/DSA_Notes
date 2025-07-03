#include<iostream>
#include<stack>

using namespace std;

void insert_bottom(stack<int> &st,int num)
{
    if(st.empty())
    st.push(num);
    else
    {
        int temp=st.top();
        st.pop();
        insert_bottom(st,temp);
        st.push(temp);
    }
}
int main()
{
    stack<int> st;
    int num;
    cin>>num;
    st.push(124);
    st.push(14);
    st.push(24);
    st.push(1);
    insert_bottom(st,num);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}