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
    cin >> data;

    if (data == -1)
        return nullptr;

    Node *root = new Node(data);

    root->left = createTree();
    root->right = createTree();

    return root;
}

int searchInorder(int inorder[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == target)
        {
            return i;
        }
    }

    return -1;
}

void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap){

    for(int i = 0; i<size; i++){

        valueToIndexMap[inorder[i]] = i;

    }

}

//preIndex ko by reference use krna bahut bahut important h
Node *constructTreeFromPreAndInorderTraversal(map<int, int> &valueToIndexMap, int preorder[], int inorder[], int &preIndex, int inOrderStart, int inorderEnd, int size)
{

    // base case
    if (preIndex >= size || inOrderStart > inorderEnd)
    {
        return nullptr;
    }

    // 1 case solve
    int element = preorder[preIndex];
    preIndex++;
    Node *root = new Node(element);

    // element search krna padega inorder me
    // int position = searchInorder(inorder, size, element);
    int position = valueToIndexMap[element];

    // baki recursion sambhal lega
    root->left = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preorder, inorder, preIndex, inOrderStart, position - 1, size);

    root->right = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preorder, inorder, preIndex, position + 1, inorderEnd, size);

    return root;
}

void levelOrderTraversal(Node *root)
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
            if (!q.empty())
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

    int inorder[] = {2, 8, 10, 6, 4, 12};
    int preorder[] = {10, 8, 6, 2, 4, 12};

    int size = 6;
    int preorderIndex = 0;
    int inorderStart = 0;
    int inorderEnd = 5;

    map<int, int> valueToIndexMap;
    createMapping(inorder, size, valueToIndexMap);

    Node *root = constructTreeFromPreAndInorderTraversal(valueToIndexMap, preorder, inorder, preorderIndex, inorderStart, inorderEnd, size);

    cout << "printing the entire tree: "; 
    levelOrderTraversal(root);

    return 0;
}