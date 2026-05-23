#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {

        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
    }
};

void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

void forw(Node *&head)
{

    Node *temp = head;

    while (temp->next != NULL)
    {

        Node *newNode = temp->next;
        temp->next = temp->next->next;
        newNode->next = temp->next;
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *forth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    cout << "intial: ";
    print(head);
    cout << endl;

    forw(head);
    cout << "final: ";
    print(head);
    cout << endl;

    return 0;
}