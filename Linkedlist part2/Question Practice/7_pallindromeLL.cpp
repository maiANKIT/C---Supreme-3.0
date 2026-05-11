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

Node *reverse(Node *&head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    while (curr != NULL)
    {

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

bool checkPallindrome(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return true;
    }

    if (head->next == NULL)
    {
        return true;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {

            fast = fast->next;
            slow = slow->next;
        }
    }

    // slow is middle LL
    // now we have to reverse the linkedlist from the middle

    Node *reverseLLkaHead = reverse(slow->next);

    slow->next = reverseLLkaHead;

    // start comparision
    Node *temp1 = head;
    Node *temp2 = reverseLLkaHead;

    while (temp2 != NULL)
    {

        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return true;
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
    Node *forth = new Node(20);
    Node *fifth = new Node(10);
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    cout << "pallindrome: " << checkPallindrome(head);

    return 0;
}