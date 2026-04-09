#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // default constructor
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

int size(Node *&head, int y)
{

    Node *temp = head;
    while (temp != NULL)
    {
        y++;
        temp = temp->next;
    }

    return y;
}

void valueAtPos(Node *&head, int z, int s)
{
    Node *temp = head;
    while (z != s / 2)
    {

        z++;
        temp = temp->next;
    }

    cout << temp->data;
}

void insertAtHead(Node *&head, int data)
{
    // step 1:  create a new node
    Node *newNode = new Node(data);

    // step 2: attached kr do new node k next ko
    newNode->next = head;
    // step 3: head ko wapis starting me lete aao
    head = newNode;
}

int main()
{

    Node *head = NULL;

    int n;
    cout << "enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        insertAtHead(head, x);
    }

    cout << "print values: ";
    print(head);

    cout << endl
         << "size of LL: ";
    int y = 0;
    int s = size(head, y);
    cout << s << endl;

    int z = 0;
    int x = 0;
    cout << "mid value: ";
    valueAtPos(head, z, s);

    return 0;
}