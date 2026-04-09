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

// printing LL
void print(Node *&head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}

// Node *reverse(Node *&prev, Node *&curr){

//       //base case
//       if(curr == NULL){
//             //LL reverse ho chuki h
//             return prev;
//       }

//       //ek case solve krte h baki ka recursive call
//       Node* forward = curr->next;
//       curr->next = prev;

//       reverse(curr, forward);

// }

Node *reverseUsingLoop(Node *head){

    Node *prev = NULL;
    Node *curr = head;

    while(curr != NULL){
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;

}

int main()
{

      Node *first = new Node(10);
      Node *second = new Node(20);
      Node *third = new Node(30);
      Node *forth = new Node(40);
      Node *fifth = new Node(50);

      first->next = second;
      second->next = third;
      third->next = forth;
      forth->next = fifth;

      cout<<"printing original value: ";
      print(first);
      
      cout<<endl;

    //   Node *prev = NULL;
    //   Node *curr = first;

      first = reverseUsingLoop(first);
      cout<<"reversed values: ";
      print(first);
    


      return 0;
}