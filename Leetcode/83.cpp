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

void removeDuplicate(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->next != NULL && (temp->data == temp->next->data))
        {

            Node *del = temp->next;
            temp->next = temp->next->next;
            del->next = NULL;
            delete del;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(1);
    Node *third = new Node(2);
    // Node *forth = new Node(3);
    // Node *fifth = new Node(3);

    head->next = second;
    second->next = third;
    // third->next = forth;
    // forth->next = fifth;

    print(head);
    cout << endl;
    removeDuplicate(head);
    print(head);

    return 0;
}