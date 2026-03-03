#include <iostream>

using namespace std;

// sabse pahle class banate h node ka;

class Node
{
    // isko public krte h
public:
    // data assign krte h
    int data;
    // node assign krte h
    Node *next;

    // default constructor bnte h
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // constructor bnte h
    Node(int data)
    { // data pass krte h

        this->data = data;
        this->next = NULL;
    }
};

// insert krne k liye function
void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {

        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step 1:  create a new node
    Node *newNode = new Node(data);

    // step 2: attached kr do new node k next ko
    newNode->next = head;
    // step 3: head ko wapis starting me lete aao
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = tail;

    tail = newNode;
}

// print wala function
void print(Node *&head)
{ // by referernce use kiya taki copy na bne aur original me change kr rhe hm

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
    Node *head = NULL; // null banaya kyu mai data insert krna chta hu yadi kuchh data phle se ho toh mai us case me new Node(data ki value) kr leta

    Node *tail = NULL;

    insertAtHead(head, tail, 10); // insert hmesha aage se hota h vector k push_back k opposite
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    insertAtTail(head, tail, 40);

    // print krte h inserted node ko
    cout << "values are: ";
    print(head);

    return 0;
}