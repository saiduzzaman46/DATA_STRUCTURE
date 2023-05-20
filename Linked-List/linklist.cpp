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
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertBegin(Node *&head, int data)
{
    Node *newNode = createNode(data);
    newNode->next = head;
    if (head != NULL)
    {
        (head)->prev = newNode;
    }
    head = newNode;
}
void printList(Node *&head)
{
    cout << "List (forward direction): ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head=NULL;

    insertBegin(head,1);
    insertBegin(head,2);
    insertBegin(head,3);

    printList(head);
}