#include <bits/stdc++.h>

using namespace std;

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

Node *createTree(){

    int data;
    cout<<"enter the value of node: ";
    cin>>data;

    //data yadi -1 hoga toh hm use null consider karenge
    if(data == -1){
        return NULL;
    }

    //jab data ki value null na ho
    Node *root = new Node(data);

    root->left = createTree();

    root->right = createTree();

    return root;

}

void levelorderTraversal(Node *root){

    queue<Node*> q;

    q.push(root);

    while(!q.empty()){

        Node *front = q.front();
        q.pop();

        cout<<front->data<<" ";

        //every root k left ko insert kr liya queue me
        if(front->left != NULL){
            q.push(front->left);
        }

        //every root k right ko insert kr lia queue me
        if(front->right != NULL){
            q.push(front->right);
        }

    }

}

int main()
{

    Node *root = createTree();
    
    cout<<"printing levelorder traversal: ";
    levelorderTraversal(root);

   return 0;
}