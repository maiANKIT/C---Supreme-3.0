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

Node *findNodeInBST(Node *root, int target)
{

    if (root == nullptr)
        return nullptr;

    if (root->data == target)
        return root;

    if (root->data > target)
    {

        return findNodeInBST(root->left, target);
    }
    else
        return findNodeInBST(root->right, target);
}

int maxVal(Node *root)
{

    Node *temp = root;
    if (root == nullptr)
    {
        return -1;
    }

    while (temp->right != nullptr)
    {
        temp = temp->right;
    }

    return temp->data;
}

Node *deleteNodeInBST(Node *&root, int target)
{

    if (root == nullptr)
        return root;

    // step1:
    Node *temp = findNodeInBST(root, target);

    if (temp->left == nullptr && temp->right == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (temp->left == nullptr && temp->right != nullptr)
    {
        Node *child = temp->right;
        delete temp;
        return child;
    }
    else if (temp->left != nullptr && temp->right == nullptr)
    {
        Node *child = temp->left;
        delete temp;
        return child;
    }
    else
    {

        // dono child exist krte h
        // inorder predecessor of left subtree -> left subtree me max value
        int inorderPre = maxVal(temp->left);
        temp->data = inorderPre;
        temp->left = deleteNodeInBST(temp->left, inorderPre);
        return root;
    }
}

void levelOrderTraversal(Node *root)
{

    if (root == nullptr)
        return;

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

int main()
{

    cout << "enter value to create BST: ";
    Node *root = nullptr;
    takeInput(root);

    int target;
    cout << "enter the value to delete from BST: ";
    cin >> target;

    cout << "before deleting node: "<<endl;
    levelOrderTraversal(root);

    cout << endl;
    deleteNodeInBST(root, target);
    levelOrderTraversal(root);

    return 0;
}