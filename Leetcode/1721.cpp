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

int getLength(Node *&head){

    int length = 0;
    Node *temp = head;
    while(temp != NULL){

        temp = temp->next;
        length++;

    }

    return length;

}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *forth = new Node(4);
    Node *fifth = new Node(5);
    // Node *sixth = new Node(5);
    // Node *seventh = new Node(2);
    // Node *eigth = new Node(0);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;
    // seventh->next = eigth;

    int n;
    cout<<"enter n: ";
    cin>>n;

    cout << "intial: ";
    print(head);
    cout << endl;

    bool x = 0;

    int len = getLength(head);
    int count = 1;

    Node *temp = head;

    Node *a = new Node(-1);
    Node *b = new Node(-1);

    while(count <= len - n){

        if(count == n){

            a = temp;

        }
        else if(count == len - n){
            b = temp;
            break;
        }

        temp = temp->next;
        count++;

    }

    return 0;
}