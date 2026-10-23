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

Node *createNode()
{

    int data;
    // cout << "enter value of data: ";
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = new Node(data);

    root->left = createNode();
    root->right = createNode();

    return root;
}

vector<int> solve(Node *root, vector<int> &ans, int count)
{

    if (root == nullptr)
    {
        return ans;
    }

    if (count == ans.size())
    {
        ans.push_back(root->data);
        // if (root->left != nullptr)
        // {
        // solve(root->left, ans, count + 1);
        // }
        // if (root->right != nullptr)
        // {
        // solve(root->right, ans, count + 1);
        // }
    }

    //right view k liye kuchh nhi krna bas right and left ki recursion ki position ko exchange kr do kyu ki hm phle left ko dekhte the phir right lekin position exchange krne se hm right ko phle dekhte h phir left ko dekhte h

    solve(root->right, ans, count + 1);
    solve(root->left, ans, count + 1);
    // solve(root->right, ans, count + 1);

    return ans;
}

int main()
{

    cout << "enter values: ";
    Node *root = createNode();
    // cout<<endl;

    vector<int> ans;
    vector<int> final = solve(root, ans, 0);

    cout << "printing left view: ";
    for (int i = 0; i < final.size(); i++)
    {

        cout << final[i] << " ";
    }

    return 0;
}