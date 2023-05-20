#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;

// Function to create a new node with the given data
Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a new node at the beginning of the list
void insertBegin(int value)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

// Function to insert a new node at the end of the list
void insertEnd(int value)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Function to insert a new node at the specified position in the list
void insertPosition(int value, int position)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 0)
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *current = head;
    Node *previous = nullptr;
    int i = 0;
    while (i < position && current != nullptr)
    {
        previous = current;
        current = current->next;
        i++;
    }

    if (current == nullptr && i == position)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }

    if (current == nullptr)
    {
        cout << "Position is out of range." << endl;
        return;
    }

    previous->next = newNode;
    newNode->prev = previous;
    newNode->next = current;
    current->prev = newNode;
}

// Function to delete the first node in the list
void deleteBegin()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    head = head->next;

    if (head == nullptr)
    {
        tail = nullptr;
    }
    else
    {
        head->prev = nullptr;
    }

    delete temp;
}

// Function to delete the last node in the list
void deleteEnd()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = tail;
    tail = tail->prev;

    if (tail == nullptr)
    {
        head = nullptr;
    }
    else
    {
        tail->next = nullptr;
    }

    delete temp;
}

// Function to delete a node at the specified position in the list
void deletePosition(int position)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == nullptr)
        {
            tail = nullptr;
        }
        else
        {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = nullptr;
    int i = 0;
    while (i < position && current != nullptr)
    {
        previous = current;
        current = current->next;
        i++;
    }

    if (current == nullptr)
    {
        cout << "Position is out of range." << endl;
        return;
    }

    if (current == tail)
    {
        tail = tail->prev;
        tail->next = nullptr;
        delete current;
        return;
    }

    previous->next = current->next;
    current->next->prev = previous;
    delete current;
}

// Function to print the contents of the list
void printList()
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void printReverseList(Node *head)
{
    cout << "List (reverse direction): ";
    while (head->next != nullptr)
    {
        head = head->next;
    }
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}

int main()
{
    // Test the functions
    insertBegin(5);
    insertEnd(10);
    insertEnd(15);
    // insertBegin(0);
    insertPosition(7, 2);
    printList(); // Expected output: 0 5 7 10 15
    // deleteBegin();
    // deleteEnd();
    // deletePosition(2);
    // printList(); // Expected output: 5

    return 0;
}
