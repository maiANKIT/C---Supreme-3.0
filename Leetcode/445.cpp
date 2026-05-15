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

    Node *head1 = new Node(7);
    Node *second1 = new Node(2);
    Node *third1 = new Node(4);
    Node *forth1 = new Node(3);

    head1->next = second1;
    second1->next = third1;
    third1->next = forth1;

    Node *head2 = new Node(5);
    Node *second2 = new Node(6);
    Node *third2 = new Node(4);

    head2->next = second2;
    second2->next = third2;

    int sum1 = 0;

    Node *temp = head1;
    while (temp != NULL)
    {

        sum1 = 10 * sum1 + temp->data;
        temp = temp->next;
    }

    int sum2 = 0;
    Node *temp2 = head2;
    while (temp2 != NULL)
    {

        sum2 = 10 * sum2 + temp2->data;
        temp2 = temp2->next;
    }

    cout << "sum1: " << sum1 << endl;
    cout << "sum2: " << sum2 << endl;

    int finalans = sum1 + sum2;
    Node *ans = NULL;
    Node *head3 = ans;

    // Node *finalN = NULL;
    while (finalans > 0)
    {

        ans->data = finalans % 10;
        ans->next = ans;
        finalans = finalans / 10;
    }

    print(head3);

    return 0;
}