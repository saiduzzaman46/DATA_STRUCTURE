#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

void insertBegin(Node **head, int data)
{
    Node *newNode = createNode(data);
    newNode->next = *head;
    if (*head != nullptr)
    {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void insertEnd(Node **head, int data)
{
    Node *newNode = createNode(data);
    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }
    Node *lastNode = *head;
    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
    newNode->prev = lastNode;
}

void insertPosition(Node **head, int data, int position)
{
    if (position == 1)
    {
        insertBegin(head, data);
        return;
    }
    Node *newNode = createNode(data);
    Node *currentNode = *head;
    for (int i = 1; i < position - 1 && currentNode != nullptr; i++)
    {
        currentNode = currentNode->next;
    }
    if (currentNode == nullptr)
    {
        cout << "Invalid position" << endl;
        return;
    }
    newNode->next = currentNode->next;
    newNode->prev = currentNode;
    if (currentNode->next != nullptr)
    {
        currentNode->next->prev = newNode;
    }
    currentNode->next = newNode;
}

void deleteBegin(Node **head)
{
    if (*head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = *head;
    *head = (*head)->next;
    if (*head != nullptr)
    {
        (*head)->prev = nullptr;
    }
    delete temp;
}

void deleteEnd(Node **head)
{
    if (*head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    if ((*head)->next == nullptr)
    {
        delete *head;
        *head = nullptr;
        return;
    }
    Node *lastNode = *head;
    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }
    lastNode->prev->next = nullptr;
    delete lastNode;
}
void printList(Node *head)
{
    cout << "List (forward direction): ";
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
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
    Node *head = nullptr;
    insertBegin(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);
    printReverseList(head);
   
    return 0;
}