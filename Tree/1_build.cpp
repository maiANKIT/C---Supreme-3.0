#include <bits/stdc++.h>

using namespace std;

//sabse pahle node banayenge
class Node{

    public:
    int data;
    Node *left;
    Node *right;

    Node(int val){

        data = val;
        left = NULL;
        right = NULL;

    }

};

//tree create krte h
Node *createTree(){

    //pahle data ki value user se input le lete h
    int data;
    cout<<"enter the value for node: ";
    cin>>data;

    //-1 user karenge as ki uske side ab kuchh nhi h
    if(data == -1){
        return NULL;
    }

    //kyu ki ab upr check kr liya h ki value -1 nhi means node banega
    Node *root = new Node(data);

    //left subtree create krne k liye
    root->left = createTree();

    //right subtree create krne k liye
    root->right = createTree();

    return root;

}

void preorderTraversal(Node *root){

    //base case h jb root ki value null hogi tbhi toh dusri value return karenge
    if(root == NULL){
        return;
    }

    //preorder means NLR
    //current node ko process kiya basically means print kiya
    cout<<root->data<<" ";

    //left node ko process kiya
    preorderTraversal(root->left);

    //right node ko process kiya
    preorderTraversal(root->right);

}

void inorderTraversal(Node *root){

    //basically yaha follow hota LNR

    //base case
    if(root == NULL){
        return;
    }

    //left ko process karenge
    inorderTraversal(root->left);

    //current node ko process krna h ab
    cout<<root->data<<" ";

    //right node ko process krna h ab
    inorderTraversal(root->right);

}

void postorderTraversal(Node *root){

    //basically isme follow hota h LRN

    //base case
    if(root == NULL){
        return;
    }

    //left ko process krte h
    postorderTraversal(root->left);

    //right side ko process krte h
    postorderTraversal(root->right);

    //current node ko traverse krte h
    cout<<root->data<<" ";

}

int main()
{

    //create tree
    Node *root = createTree();
    cout<<root->data<<endl;

    cout<<"preorder traversal: ";
    preorderTraversal(root);

    cout<<endl<<"inorder traversal: ";
    inorderTraversal(root);

    cout<<endl<<"postorder traversal: ";
    postorderTraversal(root);

   return 0;
}