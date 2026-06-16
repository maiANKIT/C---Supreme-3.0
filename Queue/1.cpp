#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);

    //size
    cout<<"size of queue: "<<q.size()<<endl;

    //removal
    q.pop();

    cout<<"size of queue: "<<q.size()<<endl;

    if(q.empty()) cout<<"queue is empty"<<endl;
    else cout<<"queue is not empty"<<endl;

    cout<<"Front element is: "<<q.front()<<endl;
    

   return 0;
}