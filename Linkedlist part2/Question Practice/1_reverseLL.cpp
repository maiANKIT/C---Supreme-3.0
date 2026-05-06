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
};

// print
void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

// reversing LL
Node *reverseLL(Node *&prev, Node *&curr)
{

    if (curr == NULL)
    {

        return prev;
    }

    Node *temp = curr->next;

    curr->next = prev;

    return reverseLL(curr, temp);
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    Node *fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    Node *prev = NULL;
    Node *curr = head;

    print(head);
    cout << endl;
    head = reverseLL(prev, curr);
    print(head);

    return 0;
}