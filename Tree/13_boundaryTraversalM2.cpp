#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node *left, *right;

    Node(int val){

        data = val;
        left = right = nullptr;

    }

};

Node *createTree(){

    int data;
    cin>>data;

    if(data == -1) return nullptr;

    Node *root = new Node(data);

    root->left = createTree();
    root->right = createTree();

    return root;

}

void printLeftBoundary(Node *root){

    if(root == nullptr) return;

    if(root->left == nullptr && root->right == nullptr) return;

    cout<<root->data<<" ";
    if(root->left != nullptr){
        printLeftBoundary(root->left);
    }
    else printLeftBoundary(root->right);

}

void printLeafBoundary(Node *root){

    if(root == nullptr) return;

    if(root->left == nullptr && root->right == nullptr){
        cout<<root->data<<" ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);

}

void printRightBoundary(Node *root){

    if(root == nullptr) return;

    if(root->left == nullptr && root->right == nullptr){
        return;
    }

    if(root->right != nullptr){
        printRightBoundary(root->right);
    }
    else printRightBoundary(root->left);

    cout<<root->data<<" ";

}

void printBoundary(Node *root){

    if(root == nullptr) return;

    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left); //yaha leaf k liye do baar isliye kiya kyu ki right side and left side kuchh nhi hua phir
    printLeafBoundary(root->right);
    printRightBoundary(root->right);

}

int main()
{

    cout<<"enter value to create node: ";
    Node *root = createTree();

    printBoundary(root);
    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

   return 0;
}