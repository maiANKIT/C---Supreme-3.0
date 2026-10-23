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
        left = right = nullptr;
    }
};

Node *createTree()
{

    int data;
    cout << "enter the value for node: ";
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

vector<vector<int>> solve(Node *root)
{

    vector<vector<int>> ans;

    if (root == nullptr)
    {
        return ans;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        // Node *front = q.front();

        vector<int> temp;

        int n = q.size();

        for (int i = 0; i < n; i++)
        {

            Node *front = q.front();
            q.pop();

            temp.push_back(front->data);

            if (front->left != nullptr)
            {
                q.push(front->left);
            }

            if (front->right != nullptr)
            {
                q.push(front->right);
            }
        }

        ans.push_back(temp);
    }

    return ans;
}

int main()
{

    Node *root = createTree();

    vector<vector<int>> final = solve(root);

    cout << "left view: ";
    for (int i = 0; i < final.size(); i++)
    {

        // for(int j = 0; j<final[0].size(); j++){
        cout << final[i][0] << " ";
        // }
    }

    return 0;
}