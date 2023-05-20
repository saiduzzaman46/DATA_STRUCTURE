#include <iostream>
using namespace std;
class circularqueue
{
private:
    int n;
    int *arr;
    int front, rear;

public:
    circularqueue(int n)
    {
        this->n = n;
        arr = new int[n];
        front = rear = -1;
    };
    ~circularqueue()
    {
        delete[] arr;
    };
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }
    bool isFull()
    {
        return (rear + 1) % n == front;
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
            rear = (rear + 1) % n;
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
            front = (front + 1) % n;
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
   void print() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % n;
        }
        cout << arr[rear] << endl;
    }
};

int main()
{
    circularqueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    q.enqueue(6);
    q.enqueue(7);
    q.print();

    q.dequeue();
    q.dequeue();
    q.dequeue();


}