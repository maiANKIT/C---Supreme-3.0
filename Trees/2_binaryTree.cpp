#include <bits/stdc++.h>

using namespace std;

class Node{

    public: 
    int data;
    Node *left;
    Node *right;

    Node(int val){

        this->data = val;
        this->left = NULL;
        this->right = NULL;

    }

};

//it returns root node of the created tree
Node *createTree(){

    cout<<"enter the value: ";
    int data;
    cin>>data;

    //we just assume ki user yadi -1 data kki value type krta h means ye h ki to node nhi banana chta h toh NULL lga denge

    //it works as base case also
    if(data == -1) return NULL;

    //step 1 create Node
    Node *newNode = new Node(data);

    //step 2: create left subtree
    cout<<"left of node: "<<newNode->data<<endl; //we can replace newNode with root
    newNode -> left = createTree();

    //step 3: create right sub tree
    cout<<"right of root: "<<newNode->data<<endl;
    newNode -> right = createTree();

    return newNode;

}

int main()
{

    Node *root = createTree();

    cout<<root->data<<endl;

   return 0;
}