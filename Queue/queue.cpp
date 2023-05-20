#include <iostream>
using namespace std;

class queue
{
private:
    int n;
    int *arr;
    int front;
    int rear;

public:
    queue(int n)
    {
        this->n=n;
        arr=new int[n];
        front = rear = -1;
    }
    ~queue(){
        delete [] arr;
    }
    bool isFull()
    {
        return rear == n - 1;
    }
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    void print(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{

    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
   
   cout<<q.peek()<<endl;

    // q.enqueue(4);
}