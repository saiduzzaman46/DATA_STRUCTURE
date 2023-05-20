#include <iostream>
#define n 100
using namespace std;

class stack
{

private:
    int arr[n];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stuck overflow" << endl;
        }
        else
        {
            arr[++top] = x;
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {
            int x = arr[top--];
            return x;
        }
        return 0;
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
};

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.peek() << endl;
    cout << st.pop() << endl;
}