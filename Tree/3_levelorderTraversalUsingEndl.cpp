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

Node *createTree()
{

    int data;
    cout << "enter value to create node: ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = createTree();

    root->right = createTree();

    return root;
}

void levelorderTraversal(Node *root)
{

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if(!q.empty())
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

    cout<<"levelorder traversal using endl: "<<endl;
    levelorderTraversal(root);

    return 0;
}