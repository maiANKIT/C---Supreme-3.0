#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// it returns root node of the created tree
Node *createTree()
{

    cout << "enter the value for Node: ";
    int data;
    cin >> data;

    // yadi data -1 hua toh branch nhi create karenge
    if (data == -1)
    {
        return NULL;
    }

    // step 1 when data is not -1 so we have created a node
    Node *root = new Node(data);

    // cout << "left of Node: " << root->data << endl;
    // step2: create left subtree
    root->left = createTree();

    // cout << "right of Node: " << root->data << endl;
    // step3: create right subtree
    root->right = createTree();
    return root;
}

void preorderTraversal(Node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // NLR
    // N
    cout << root->data << " "; // current node
    // L
    preorderTraversal(root->left);
    //
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;
    // LNR

    // L
    inorderTraversal(root->left);
    // N
    cout << root->data << " "; // current node
    // R
    inorderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;

    // LRN
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);   

    // asli traversal start krte h
    while (q.size() > 1) 
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            q.push(NULL);
        }
        else
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }

            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{

    Node *root = createTree();
    cout << root->data << endl;

    return 0;
}