#include<iostream>
#include<stack>

using namespace std;

class MyQueue {
    stack<int>  front,rear;
public:
    void transfer()
    {
        while(!rear.empty())
        {
            front.push(rear.top());
            rear.pop();
        }
    }
    MyQueue() {
        
    }
    
    void push(int x) {
        rear.push(x);
    }
    
    int pop() {
        if(front.empty())
        transfer();
        int temp=front.top();
        front.pop();
        return temp;
    }
    
    int peek() {
        if(front.empty())
        transfer();
        return front.top();
    }
    
    bool empty() {
        return rear.empty() && front.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main()
{
    MyQueue obj;
    obj.push(1234);
    obj.push(9);
    obj.push(123);
    cout<<obj.pop()<<endl;
    obj.push(-86);
    cout<<obj.peek();
    return 0;
}