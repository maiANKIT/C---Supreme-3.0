#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node with value: " << this->data << " deleted" << endl;
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

int getLength(Node *head)
{

    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

void insertAthead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        // LL is non empty

        // step 1: create a node
        Node *newNode = new Node(data);

        // step 2:
        newNode->next = head;
        // step 3:
        head->prev = newNode;
        // step 4:
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {

        // LL is non empty

        // step 1:  create a node
        Node *newNode = new Node(data);

        // step 2:
        tail->next = newNode;
        // step 3:
        newNode->prev = tail;
        // step 4:
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{

    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {

        if (position == 1)
        {

            insertAthead(head, tail, data);
            return;
        }

        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }

        int i = 1;
        Node *prevNode = head;
        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        }

        Node *curr = prevNode->next;

        Node *newNode = new Node(data);

        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode->next = curr;
    }
}

void deleteFromPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LL is empty";
        return;
    }

    if (head->next == NULL)
    {
        // single node

        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if (position > len)
    {
        cout << "please enter valid enter position" << endl;
        return;
    }

    if (position == 1)
    {

        // want to delete first node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    // int len = getLength(head);
    if (position == len)
    {
        // delete last node
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    // delete from middle of LL

    // step 1: find left curr and right
    int i = 1;
    Node *left = head;

    while (i < position - 1)
    {
        left = left->next;
        i++;
    }

    Node *curr = left->next;
    Node *right = curr->next;

    // step 2:
    left->next = right;

    // step 3:
    right->prev = left;

    // step 4:
    curr->next = NULL;

    // step 5:
    curr->prev = NULL;

    delete curr;
    // return;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout << endl;

    insertAthead(head, tail, 101);

    print(head);
    cout << endl;

    insertAtTail(head, tail, 120);
    print(head);
    cout << endl;

    insertAtPosition(head, tail, 401, 8);
    print(head);
    cout << endl;

    deleteFromPos(head, tail, 10);
    print(head);
    cout << endl;

    return 0;
}