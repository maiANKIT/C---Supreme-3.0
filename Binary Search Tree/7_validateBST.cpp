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

void takeInput(Node *&root){

    int data;
    cin>>data;

    while(data != -1){

        root = insertIntoBST(root, data);
        cin>>data;

    }

}

bool validate(Node *root, int lb, int ub){

    if(root == nullptr) return true;

    if(root->data > lb && root->data < ub){

        bool leftAns = validate(root->left, lb, root->data);
        bool rightAns = validate(root->right, root->data, ub);
        return leftAns && rightAns;

    }
    else{
        return false;
    }

}

int main()
{

    

   return 0;
}