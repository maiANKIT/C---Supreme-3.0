#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{

    //creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    //size
    cout<<"size of queue: "<<q.size()<<endl;

    //pop;
    q.pop();

    //again new size
    cout<<"size of queue: "<<q.size()<<endl;

    if(q.empty()){ //this is basically return the bool value
        cout<<"queue is empty"<<endl;
    }
    else cout<<"queue is not empty"<<endl;

    cout<<"front element is: "<<q.front()<<endl;

   return 0;
}