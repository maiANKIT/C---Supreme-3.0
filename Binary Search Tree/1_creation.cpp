#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {

        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *insertIntoBST(Node *root, int data)
{

    if (root == nullptr)
    {

        // this is the first node we have to create
        root = new Node(data);
        return root;
    }

    // no this is not the first
    if (root->data > data)
    {

        // insert in left
        root->left = insertIntoBST(root->left, data);
    }
    else
    {

        // insert in right
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

void takeInput(Node *&root)
{

    int data;
    cin >> data;

    while (data != -1)
    {

        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{

    if (root == nullptr)
        return;

    queue<Node *> q;

    q.push(root);
    q.push(nullptr); // this is important line because

    while (!q.empty())
    {

        Node *front = q.front();

        q.pop();

        if (front == nullptr)
        {

            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << front->data << " ";
            if (front->left != nullptr)
            {
                q.push(front->left);
            }

            if (front->right != nullptr)
            {
                q.push(front->right);
            }
        }
    }
}

void preorderTraversal(Node *root)
{

    // NLR
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root)
{

    // LNR
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{

    // LRN
    if (root == nullptr)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = nullptr;

    cout << "enter the data for Node: ";
    takeInput(root);

    cout << "printing the tree: " << endl;
    levelOrderTraversal(root);

    cout << endl
         << "printing preorder traversal: ";
    preorderTraversal(root);
    cout << endl
         << "printing inorder traversal: ";
    inorderTraversal(root);
    cout << endl
         << "printing postorder traversal: ";
    postorderTraversal(root);

    // observation:
    // yadi kisi bst ko inorder kre toh wo hamesha sorted hoga
    // BST mein minimum element hamesha leftmost node hota hai
    // Maximum element hamesha rightmost node hota hai

    return 0;
}