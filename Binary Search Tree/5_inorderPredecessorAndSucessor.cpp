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
        left = nullptr;
        right = nullptr;
    }
};

Node *insertIntoBST(Node *root, int data)
{

    if (root == nullptr)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {

        root->left = insertIntoBST(root->left, data);
    }
    else
    {
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

bool findNodeInBST(Node *&root, int target)
{

    if (root == nullptr)
        return false;

    if (root->data == target)
    {
        return true;
    }

    if (root->data > target)
    {
        return findNodeInBST(root->left, target);
    }
    else
    {
        return findNodeInBST(root->right, target);
    }
}

void levelOrderTraversal(Node *root)
{

    if (root == nullptr)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

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
                q.push(front->left);
            if (front->right != nullptr)
                q.push(front->right);
        }
    }
}

int minVal(Node *root)
{

    Node *temp = root;
    if (temp == nullptr)
        return -1;

    while (temp->left != nullptr)
    {
        temp = temp->left;
    }

    return temp->data;
}

int maxVal(Node *root)
{

    Node *temp = root;
    if (temp == nullptr)
        return -1;

    while (temp->right != nullptr)
        temp = temp->right;

    return temp->data;
}

Node *toReachNode(Node *root, int target)
{

    if (root == nullptr || root->data == target)
        return root;

    if (root->data > target)
    {
        return toReachNode(root->left, target);
    }

    return toReachNode(root->right, target);
}

int inorderPredecessor(Node *root, int target)
{

    Node *temp = toReachNode(root, target);

    if (temp == nullptr)
        return -1;

    if(temp->left == nullptr) return -1;

    temp = temp->left;

    while (temp->right != nullptr)
    {

        temp = temp->right;
    }

    return temp->data;
}

int main()
{

    Node *root = nullptr;

    cout << "enter the value to create node: ";
    takeInput(root);

    // finding the predecessor it without traversing inorder
    // it is valid only when the target left side present other wise we have to find by the inorder traversal

    int target;
    cout << "enter value to find its inorder predecessor: ";
    cin >> target;

    int ans = inorderPredecessor(root, target);

    cout << "final ans: " << ans << endl;
    //abhi sucessor bhi nikalna h

    return 0;
}