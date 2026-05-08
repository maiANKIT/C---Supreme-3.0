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
    int count = 0;

    Node *temp = head;
    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }

    return count;
}

Node *reverseKNodes(Node *&head, int k)
{

    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }

    int len = getLength(head);

    if (k > len)
    {

        cout << "enter valid value of k" << endl;
        return head;
    }

    // it means number of nodes in LL >= k
    // step A: reverse first k Nodes of LL
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    int count = 0;

    while (count < k)
    {

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step b: recursive call

    if (forward != NULL)
    {

        // we still have nodes to reverse
        head->next = reverseKNodes(forward, k);
    }

    // step c: return head of the modified LL
    return prev;
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    print(head);
    cout << endl;

    Node *newNode = reverseKNodes(head, 2);
    print(newNode);

    return 0;
}