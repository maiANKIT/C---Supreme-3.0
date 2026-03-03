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

    // this is not default constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head) // ye ek function hi h
{

    Node *temp = head; // isme second linked h
    while (temp != NULL)
    {
        cout << temp->data << " "; // second print hoga
        temp = temp->next;         // second ka ho gya ab next ko call kr rhe h
    }
}

int main()
{

    // creating node

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    Node *fifth = new Node(50);

    // linking nodes

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;

    // printing LL using function
    cout << "printing: ";
    print(second);

    return 0;
}