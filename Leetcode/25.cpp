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

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *&head)
{

    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    return count;
}

Node *reverseKN(Node *&head, int k, int len)
{

    if (head == NULL || head->next == NULL || len < k)
        return head;

    Node *prev = NULL;
    Node *curr = head;

    Node *temp = NULL;

    int count = 0;
    while (count < k)
    {

        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        temp = forward;
        count++;
    }

    len = len - k;

    if (temp != NULL)
    {

        head->next = reverseKN(temp, k, len);
    }

    return prev;
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

    cout << "enter value of k: ";
    int k;
    cin >> k;

    int len = getLength(head);

    cout << "printing initial value: ";
    print(head);
    cout << endl;

    head = reverseKN(head, k, len);
    print(head);

    return 0;
}