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

    Node *head = new Node(0);
    Node *second = new Node(3);
    Node *third = new Node(1);
    Node *forth = new Node(0);
    Node *fifth = new Node(4);
    Node *sixth = new Node(5);
    Node *seventh = new Node(2);
    Node *eigth = new Node(0);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;

    cout << "intial: ";
    print(head);
    cout << endl;

    Node *temp = head;
    while(temp != NULL){

        int sum = 0;
        

    }

    return 0;
}