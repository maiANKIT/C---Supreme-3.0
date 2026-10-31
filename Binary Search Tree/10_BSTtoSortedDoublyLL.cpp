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

    if (data < root->data)
    {

        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

Node *bstUsingInorder(vector<int> inorder, int s, int e)
{

    // base case
    if (s > e)
        return nullptr;

    int m = (s + e) / 2;

    int element = inorder[m];
    Node *root = new Node(element);

    root->left = bstUsingInorder(inorder, s, m - 1);
    root->right = bstUsingInorder(inorder, m + 1, e);

    return root;
}

void convertIntoSortedDLL(Node *root, Node *&head)
{

    // base case
    if (root == nullptr)
        return;

    // right subtree ko linkedlist me convert kro
    convertIntoSortedDLL(root->right, head);

    // attached root node
    root->right = head;

    if (head != nullptr)
    {
        head->left = root;
    }

    // update head
    head = root;

    convertIntoSortedDLL(root->left, head);
}

void printLinkedList(Node *head)
{

    Node *temp = head;

    cout << endl;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
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

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> inorder(n);
    cout << "enter the values: ";
    for (int &i : inorder)
        cin >> i;

    int s = 0, e = n - 1;

    Node *root = bstUsingInorder(inorder, s, e);
    levelOrderTraversal(root);

    cout << "printing sorted linkedlist: ";
    Node *head = nullptr;
    convertIntoSortedDLL(root, head);

    printLinkedList(head);

    return 0;
}