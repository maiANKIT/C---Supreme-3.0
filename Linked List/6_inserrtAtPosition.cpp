#include <iostream>

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

void insertAtTail(Node *&tail, int data)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = tail;

    tail = newNode;
}

// insert at position

void insertAtPosition(int data, int position, Node *&tail)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        return;
    }
    // find the position
    int i = 1;
    Node *prev = tail;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    // step 2 create a new node
    Node *newNode = new Node(data);

    // step 3
    newNode->next = curr;

    // step 4
    prev->next = curr; // kyu ki ab current jo h wo new node ho gya na ab next to next wala current tha pahle
}

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

    // creating nodes
    // Node *head = NULL; // null banaya kyu mai data insert krna chta hu yadi kuchh data phle se ho toh mai us case me new Node(data ki value) kr leta

    Node *tail = NULL;

    insertAtTail(tail, 10); // insert hmesha aage se hota h vector k push_back k opposite
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);

    insertAtTail(tail, 40);

    // print krte h inserted node ko
    cout << "values are: ";
    print(tail);

    cout << endl;
    insertAtPosition(15, 0, tail);
    print(tail);

    return 0;
}