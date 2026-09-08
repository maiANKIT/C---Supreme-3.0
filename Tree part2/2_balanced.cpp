#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node *left;
    Node *right;

    Node(int value){

        data = value;
        left = NULL;
        right = NULL;

    }

};

Node *buildTree(){

    int val;
    cin>>val;

    if(val == -1) return NULL;
    else{

        Node *root = new Node(val);
        root->left = buildTree();
        root->right = buildTree();
        return root;

    }

}

int main()
{

    Node *root = buildTree();

    cout

   return 0;
}