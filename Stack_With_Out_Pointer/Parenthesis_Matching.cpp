#include <iostream>
#define MAX_SIZE 100
using namespace std;

class stack {
    private:
        char arr[MAX_SIZE];
        int top;

    public:
        stack() {
            top = -1;
        }

        bool push(char x) {
            if (top >= (MAX_SIZE - 1)) {
                cout << "Stack Overflow" << endl;
                return false;
            }
            else {
                arr[++top] = x;
                return true;
            }
        }

        char pop() {
            if (top < 0) {
                cout << "Stack Underflow" << endl;
                return '\0';
            }
            else {
                char x = arr[top--];
                return x;
            }
        }

        char peek() {
            if (top < 0) {
                cout << "Stack is Empty" << endl;
                return '\0';
            }
            else {
                char x = arr[top];
                return x;
            }
        }

        bool isEmpty() {
            return (top < 0);
        }
};


bool isMatchingPair(char character1, char character2) {
    if (character1 == '(' && character2 == ')')
        return true;
    else if (character1 == '{' && character2 == '}')
        return true;
    else if (character1 == '[' && character2 == ']')
        return true;
    else
        return false;
}

bool isValid(string exp) {
    stack s;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            s.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.isEmpty() || !isMatchingPair(s.peek(), exp[i])) {
                return false;
            }
            else {
                s.pop();
            }
        }
    }
    return s.isEmpty();
}
int main()
{
    string s = "[(a+b)-{(c+d)-e}]";
    if (isValid(s))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Envalid string" << endl;
    }
}