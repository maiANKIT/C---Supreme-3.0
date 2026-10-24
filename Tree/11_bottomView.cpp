#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *left, *right;

    Node(int val)
    {

        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node *createTree()
{

    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = new Node(data);

    root->left = createTree();
    root->right = createTree();

    return root;
}

void bottomView(Node *root)
{

    if (root == nullptr)
    {
        return;
    }

    map<int, int> mp;
    queue<pair<Node *, int>> q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {

        pair<Node *, int> front = q.front();

        q.pop();

        Node *frontNode = front.first;
        int frontVal = front.second;

        mp[frontVal] = frontNode->data;

        if (frontNode->left != nullptr)
        {
            q.push(make_pair(frontNode->left, frontVal - 1));
        }
        if (frontNode->right != nullptr)
        {
            q.push(make_pair(frontNode->right, frontVal + 1));
        }
    }

    cout << "Bottom View: ";
    for (auto i : mp)
    {

        cout << i.second << " ";
    }
}

int main()
{

    cout<<"enter value to create node: ";
    Node *root = createTree();

    bottomView(root);

    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

    return 0;
}