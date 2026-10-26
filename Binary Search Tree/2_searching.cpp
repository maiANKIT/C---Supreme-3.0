#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
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

    if(root->data > data){

        root->left = insertIntoBST(root, data);

    }
    else{
        root->right = insertIntoBST(root, data);
    }

    return root;

}

void *takeInput(Node *&root){

    int data;
    cin>>data;

    while(data != -1){

        root = insertIntoBST(root, data);
        cin>>data;

    }

    // return root;

}

bool findNodeInBST(Node *&root, int target){

    if(root == nullptr) return false;

    if(root->data == target){
        return false;
    }

    if(root->data > target){
        return findNodeInBST(root->left, target);
    }
    else{
        return findNodeInBST(root->right, target);
    }

}

void levelOrderTraversal(Node *root){

    if(root == nullptr){
        return;
    }

    queue<Node *> q;
    q.push(root);

    while(!q.emp)

}

int main()
{

    //average case k andar BST me searching me O(log(n)) and worst case O(n)
    //skewed tree k case me worst hota h O(n) skti h

    Node *root = nullptr;

    cout<<"enter the value to create node: ";
    takeInput(root);

    cout<<"tree: "<<endl;
    


   return 0;
}