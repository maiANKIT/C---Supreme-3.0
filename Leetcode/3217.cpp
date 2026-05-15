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

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *forth = new Node(4);
    Node *fifth = new Node(5);
    // Node *sixth = new Node(2);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    // fifth->next = sixth;

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    Node *temp = head;
    int count = 0;
    int i = 0;

    while (i < nums.size())
    {
        temp = head;
        while (temp != NULL)
        {

            if (temp->data == nums[i])
            {
                Node *newNode = temp;
                temp = temp->next;
                newNode->next = NULL;
                head = temp;
                delete newNode;
            }
            else if (temp->next != NULL && temp->next->data == nums[i])
            {

                Node *newNode = temp->next;
                temp->next = temp->next->next;
                newNode->next = NULL;
                delete newNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        i++;
    }

    print(head);

    return 0;
}