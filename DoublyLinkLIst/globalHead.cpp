#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertBegin(int data)
{
    Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertEnd(int data)
{
    Node *newNode = createNode(data);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertPosition(int data, int position)
{
    if (position == 0)
    {
        insertBegin(data);
        return;
    }

    Node *newNode = createNode(data);
    Node *current = head;
    Node *previous = NULL;
    int i = 0;
    while (i < position && current != NULL)
    {
        previous = current;
        current = current->next;
        i++;
    }

    if (current == NULL && i == position)
    {
        previous->next = newNode;
        newNode->prev = previous;
        tail = newNode;
        return;
    }

    if (current == NULL)
    {
        cout << "Position is out of range." << endl;
        return;
    }

    previous->next = newNode;
    newNode->prev = previous;
    newNode->next = current;
    current->prev = newNode;
}

void deleteBegin()
{
    if (head == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
    }
    else
    {
        head->prev = NULL;
    }
    delete temp;
}

void deleteEnd()
{
    if (tail == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    if (tail == NULL)
    {
        head = NULL;
    }
    else
    {
        tail->next = NULL;
    }
    delete temp;
}

void deletePosition(int position)
{
    if (head == NULL)
    {
        cout << "The list is empty." << endl;
        return;
    }

    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = NULL;
    int i = 0;
    while (i < position && current != NULL)
    {
        previous = current;
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        cout << "Position is out of range." << endl;
        return;
    }

    if (current == tail)
    {
        tail = tail->prev;
    }
    else
    {
        current->next->prev = previous;
    }

    previous->next = current->next;
    delete current;
}

void printList()
{
    Node *current = head;
    cout << "List: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void printPreviousList()
{
    Node *current = tail;
    cout << "Reverse List: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int main()
{

    insertEnd(7);
    insertEnd(9);
    insertEnd(11);

    printList();
    printPreviousList();

    return 0;
}
