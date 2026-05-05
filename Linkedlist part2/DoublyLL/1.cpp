#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {

        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {

        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// print function
void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

// getting length

int getLength(Node *&head)
{

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

// insert at head

void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = head;

    head->prev = newNode;

    head = newNode;
}

// insert at tail

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;

        return;
    }

    Node *newNode = new Node(data);

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

// insert at position

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;

        return;
    }

    if (position == 1)
    {

        insertAtHead(head, tail, data);
        return;
    }

    int len = getLength(head);
    if (position > len)
    {

        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prevNode = head;
    while (i < position - 1)
    {

        prevNode = prevNode->next;
        i++;
    }

    Node *curr = prevNode->next;

    Node *newNode = new Node(data);

    prevNode->next = newNode;
    newNode->prev = prevNode;
    curr->prev = newNode;
    newNode->next = curr;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    insertAtHead(head, tail, 0);
    insertAtTail(head, tail, 40);
    insertAtPosition(head, tail, 55, 2);

    print(head);

    return 0;
}