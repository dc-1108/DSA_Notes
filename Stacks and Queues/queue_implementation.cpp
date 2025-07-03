#include <iostream>
#include<vector>
using namespace std;
 
class Queue {
    int *arr;
    int f;
    int rear;
    int size;
public:
    Queue() {
        size=10001;
        arr= new int[size];
        f=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return f==rear;

    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size) 
        cout<<"The queue is full"<<endl;
        else
        {
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(f==rear)
        {
            cout<<"The queue is empty"<<endl;
            f=0;
            rear=0;
            return -1;
        }
        else
        {
            return arr[f];
            f++;
            
        }
    }

    int front() {
        if(f==rear)
        {
            cout<<"The queue is empty"<<endl;
            return -1;
        }
        else
        return arr[f];
    }
};

int main()
{
    Queue q;
    q.enqueue(12);
    q.enqueue(9);
    q.enqueue(2);
    q.enqueue(1);
    q.dequeue();
    cout<<q.front()<<endl;
}