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

bool checkCircular(Node *&head)
{

    Node *temp = head;

    if (temp == NULL)
        return false;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

Node *startingPoint(Node *&head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            break;
        }
    }

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

Node *removeLoop(Node *&head)
{

    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            break;
        }
    }

    Node *prev = fast;

    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }

    prev->next = NULL;

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
    Node *seventh = new Node(70);
    Node *eight = new Node(80);
    Node *ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = ninth;
    ninth->next = fifth;

    cout << "loop present: " << checkCircular(head) << endl;
    cout << "starting point: " << startingPoint(head)->data << endl;

    removeLoop(head);
    cout << "loop present now: " << checkCircular(head) << endl;

    return 0;
}