#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node *left, *right;

    Node(int val){

        data = val;
        left = nullptr;
        right = nullptr;

    }

};

Node *createTree(){

    int data;
    cin>>data;

    if(data == -1){
        return nullptr;
    }

    Node *root = new Node(data);

    root->left = createTree();
    root->right = createTree();

    return root;

}

void printTopView(Node *root){

    map<int, int> hdToNodemap; //-2, -1, 0, 1, 2.. store karega and dusra int value store karega
    queue<pair<Node*, int>> q; //basically Node store hoga and uske sath -2, -1, 0, 1, 2 store hoga
    q.push(make_pair(root, 0)); //first jo root h uska uska value 0 se store hoga

    while(!q.empty()){
        
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second; //agar is horizontal distance k liye answer abhi store nhi hua h toh ab store kr lo

        if(hdToNodemap.find(hd) == hdToNodemap.end()){
            hdToNodemap[hd] = frontNode->data;
        }

        //child ko dekhna h ab
        if(frontNode->left != nullptr){
            q.push(make_pair(frontNode->left, hd - 1));
        }

        if(frontNode->right != nullptr){
            q.push(make_pair(frontNode->right, hd + 1));
        }

    }

    cout<<"top view: ";
    for(auto i: hdToNodemap){
        cout<<i.second<<" ";
    }

}

int main()
{

    cout<<"enter value to create tree: ";
    Node *root = createTree();
    //10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

    printTopView(root);

   return 0;
}