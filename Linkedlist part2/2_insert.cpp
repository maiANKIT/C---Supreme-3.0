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

// printing function
void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// finding length of linkedlist
int findLength(Node *&head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

// insert function
void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = head;

    head = newNode;
}

// insertAttail
void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    tail->next = newNode;

    tail = newNode;
}

// insert at postion
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);

        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int length = findLength(head);

    if (position >= length)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    Node *newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;

    // curr = newNode;
}

// deletion

void deleteNode(Node *&head, Node *&tail, int position)
{

    if (head == NULL)
    {

        cout << "LL is already NULL" << endl;
        return;
    }

    if (position == 1)
    {

        Node *temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;

        return;
    }

    int len = findLength(head);

    if (position == len)
    {

        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;

        Node *temp = tail;

        tail = prev;

        delete temp;

        return;
    }

    int i = 1;

    Node *prev = head;
    while(i<position - 1){

        prev = prev->next;
        i++;

    }

    Node *curr = prev->next;

    prev->next = curr->next;

    curr->next = NULL;

    delete curr;

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 15);

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 50);

    int len = findLength(head);

    insertAtPosition(head, tail, len, 100);
    // deleteNode(head, tail, 5);

    deleteNode(head, tail, 4);

    print(head);

    return 0;
}