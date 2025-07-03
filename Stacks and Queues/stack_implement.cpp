#include<iostream>
#include<vector>

using namespace std;

class stack
{
    public:
    vector<int> v;
    
    void push(int element)
    {
        v.push_back(element);
    }
    void pop()
    {
        if(v.size()>0)
        v.pop_back();
        else
        cout << "Stack Underflow"<<endl;
    }
    int top()
    {
        if(v.size()>0)
        return v[v.size()-1];
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    int size()
    {
        return v.size();
    }
    bool isempty()
    {
        return v.size()==0;
    }

};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(15);
    s.pop();
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    return 0;
}
