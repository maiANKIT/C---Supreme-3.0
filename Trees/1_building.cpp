#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {

        data = value;
        left = NULL;
        right = NULL;
    }
};

// return root node of tree
Node *buildTree()
{

    int val;
    cin >> val;

    if (val == -1)
        return NULL;
    else
    {
        Node *root = new Node(val);
        // 1 case maine krdia baaki recursion
        root->left = buildTree();
        root->right = buildTree();
        return root;
    }
}

// NLR - preorder
void preOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // 1 case main solve krunga, baaki recursion sambhal lega
    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

// LNR - inorder
void inorderTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;
    // LNR
    // L
    inorderTraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inorderTraversal(root->right);
}

void postTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;

    // LRN
    // L
    postTraversal(root->left);
    // R
    postTraversal(root->right);
    // N
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{

    // empty tree
    if (root == NULL)
        return;

    // LOT
    queue<Node *> q;
    // initial state maintain
    q.push(root);

    while (!q.empty())
    {

        Node *front = q.front();
        q.pop();

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

int main()
{

    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node *root = buildTree();
    cout << "Printing preorder traversal: " << endl;
    preOrderTraversal(root);
    cout << endl;

    cout << "Printing inorder traversal: " << endl;
    inorderTraversal(root);
    cout << endl;

    cout << "Printing postorder traversal: " << endl;
    postTraversal(root);
    cout << endl;

    cout << "Printing level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}