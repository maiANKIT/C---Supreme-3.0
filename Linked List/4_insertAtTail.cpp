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

    // constructor
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

// insert at tail k liye function
void insertAtTail(Node *&tail, int data)
{
    // create a node
    Node *newNode = new Node(data);

    // connect with tail node
    if (tail != NULL)
    {
        tail->next = newNode;
    }

    // update tail
    tail = newNode;
}

// print the node
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

    Node *tail = NULL;
    insertAtTail(tail, 10); // ab tail pr value add hogi
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);

    cout << "printing the values: ";
    print(tail);

    return 0;
}