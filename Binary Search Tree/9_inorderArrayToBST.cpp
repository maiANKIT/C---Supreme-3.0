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

Node *bstUsingInorder(vector<int> inorder, int s, int e){

    //base case
    if(s > e) return nullptr;

    int m = (s+e)/2;

    int element = inorder[m];
    Node *root = new Node(element);

    root->left = bstUsingInorder(inorder, s, m - 1);
    root->right = bstUsingInorder(inorder, m + 1, e);

    return root; 

}

int main()
{

    

   return 0;
}