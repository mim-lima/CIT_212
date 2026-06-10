#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertEnd(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void insertStart(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAfter3rd(int value)
{
    Node *temp = head;

    for (int i = 1; i < 3; i++)
        temp = temp->next;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteStart()
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd()
{
    Node *temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

void delete3rd()
{
    Node *temp = head;

    for (int i = 1; i < 2; i++)
        temp = temp->next;

    Node *del = temp->next;
    temp->next = del->next;

    delete del;
}

void display()
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    insertStart(20);
    insertEnd(50);
    insertAfter3rd(40);

    deleteStart();
    deleteEnd();
    delete3rd();

    display();

    return 0;
}