#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node *left;
    Node *right;

    Node(int val){

        data = val;
        left = nullptr;
        right = nullptr;

    }

};

Node *insertIntoBST(Node *root, int data){

    if(root == nullptr){

        root = new Node(data);
        return root;

    }

    if(data < root->data){

        root->left = insertIntoBST(root->left, data);

    }
    else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;

}

// int lowestCommonAncestor
// leetcode pr solve kiya h waha prefer kr skte h ig lowest common ancestor in bst

int main()
{

    

   return 0;
}