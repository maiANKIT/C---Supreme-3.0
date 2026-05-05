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

int position1(Node *&head, int data){

    Node *temp = head;
    
    int count = 0;
    while(temp->data != data){
        count++;
        temp = temp->next;
    }

    return count;

}

void deleteNode(Node *&head, Node *&tail, int position)
{

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
    while (i < position - 1)
    {

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

    // Node *head = newNode();
    
    int position = position1(head, data);

    deleteNode(head, tail, position);

    return head;

    return 0;
}