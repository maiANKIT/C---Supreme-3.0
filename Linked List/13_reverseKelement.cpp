#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


int getLength(Node *head){

    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp -> next;

    }

    return count;

}

Node* reverseKnode(Node *head, int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    int len = getLength(head); //length nikal liya
    if(k>len){
        // cout<<"enter valid value of k"<<endl;
        return head;
    }

    //it mean number of nodes in LL is >= k
    //step a: reverse first k node of LL

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    
    int count = 0;

    while(count<k){
        forward = curr ->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }


    //step b: recursive call
    if(forward != NULL){
        //we still have nodes left to reverse
        head -> next = reverseKnode(forward, k);
    }

    //step c: return head of the modified LL
    return prev;

}

void print(Node *head){

    Node *temp = head;

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;

    }

    cout<<endl;

}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *forth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    print(head);

    head = reverseKnode(head, 2);
    print(head);

    return 0;
}