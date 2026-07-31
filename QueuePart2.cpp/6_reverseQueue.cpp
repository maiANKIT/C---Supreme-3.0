#include <bits/stdc++.h>

using namespace std;

void reverseQueue(queue<int> &q){

    stack<int> s;
    //step 1: put all element of q into s
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //step 2: put all element from stack into q
    while(!s.empty()){

        int element = s.top();
        s.pop();
        q.push(element);

    }

}

void reverseQueueRecursion(queue<int> &q){

    //base case
    if(q.empty()){
        return;
    }

    //step A
    int temp = q.front();
    q.pop();

    //step B
    reverseQueueRecursion(q);

    //step C
    q.push(temp);

}

int main()
{

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQueueRecursion(q);

    cout<<"printing queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

   return 0;
}