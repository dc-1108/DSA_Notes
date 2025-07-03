#include <iostream>
#include<vector>
using namespace std;
 
class CircularQueue {
    int size;
    int front;
    int rear;
    int *arr;
    bool empty,full;
public:
    CircularQueue(int k) {
        size=k;
        arr= new int[k];
        rear=0;
        front=0;
        empty=true;
        full=false;
    }
    
    bool enqueue(int value) {
        if(full)
        return false;//to check if full
        arr[rear]=value;
        rear++;
        rear=rear%size;
        if(rear==front)full=true;
        empty=false;
        return true;
    }
    
    bool dequeue() {
        if(empty)
        {
            return false;  // return false only if queue is empty
        }
        front++;
        front=front%size;
        if(front==rear) empty=true;
        full=false;
        return true;
    }
    
    int front() {
        if(empty)
        return -1; // only if queue is empty
        else
        return arr[front];
    }
    
    int rear() {
        if(empty)
        return -1; // only if queue is empty
        else
        {
            if(rear==0)
            return arr[size-1];
            else return arr[rear-1];
        }
    }
    
    bool isempty() {
        return empty;
    }
    
    bool isfull() {
        return full;
    }
};

int main()
{
    CircularQueue q;
    // q.enqueue(12);
    q.enqueue(9);
    q.enqueue(2);
    q.enqueue(1);
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
}