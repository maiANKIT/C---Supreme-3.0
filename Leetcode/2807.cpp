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

int main()
{

    Node *head = new Node(18);
    Node *second = new Node(6);
    Node *third = new Node(10);
    Node *forth = new Node(3);
    // Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = forth;
    // forth->next = fifth;

    cout << "intial: ";
    print(head);
    cout << endl;

    Node *temp = head;
    while (temp->next != NULL)
    {

        int a = temp->data;
        int b = temp->next->data;

        int x = 0;
        for (int i = 1; i <= min(a, b); i++)
        {

            if (a % i == 0 && b % i == 0)
            {
                x = i;
            }
        }

        Node *newNode = new Node(x);
        Node *ne = temp->next;
        temp->next = newNode;
        newNode->next = ne;
        temp = temp->next->next;
    }

    cout << "final LL: ";
    print(head);

    return 0;
}