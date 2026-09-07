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

// this function will help to create a tree also return root node of tree
Node *buildTree()
{

    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }
    else
    {

        Node *root = new Node(val); // yadi value -1 nhi hui toh ek new Node banayenge
        // ek case ho gya baki recursion kr k dega

        root->left = buildTree();  // left side bna liya
        root->right = buildTree(); // right side bhi bna liya
        return root;
    }
}

// preorder: NLR (N: current, L: left side tree, R: right side tree)
void preOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // 1 case solve rest recursion
    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

// inorder: LNR
void inOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;

    // LNR

    // L
    inOrderTraversal(root->left);

    // N
    cout << root->data << " ";

    // R
    inOrderTraversal(root->right);
}

// PostOrder: LRN
void postOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
        return;

    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->data << " ";
}

// level order Traversal
// isme ye hota h ki jaise ki maan lo hmme ek tree diiya h aur use copy pr draw krna h waise hi print krna h
void levelOrderTraversal(Node *root)
{

    // empty
    if (root == NULL)
        return;

    // Level order traversal
    queue<Node *> q;

    // initial state maintain
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            // current level ki sari node print ho chuki h
            // go to next line
            cout << endl;
            //agar  q empty h, then do not insert NULL-> kyu ki infinite loop me fas skta h thats why
            //agar q non empty h, then insert NULL, to indicate the rightmost Node or end of level

            if(!q.empty()){
                q.push(NULL);
            }
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

    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node *root = buildTree();
    cout << "Printing preorder traversal: " << endl;
    preOrderTraversal(root);

    cout << endl
         << "Printing inorder traversal: " << endl;
    inOrderTraversal(root);

    cout << endl
         << "Printing postOrder traversal: " << endl;
    postOrderTraversal(root);

    cout << endl
         << "Printing level order traversal: " << endl;
    levelOrderTraversal(root);

    // homework preorder, inorder, postorder using stack

    return 0;
}