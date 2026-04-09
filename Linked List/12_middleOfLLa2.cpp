#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// print LL

void print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// finding middle
Node *getMiddle(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }

    if (head->next == NULL)
    {
        // only 1 node in LL
        return head;
    }

    // LL have greater than one node
    Node *slow = head;
    Node *fast = head->next;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
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
    sixth->next = NULL;

    print(head);

    cout << "middle node is: " << getMiddle(head) -> data<< endl;

    return 0;
}