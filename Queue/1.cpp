#include <iostream>
#include <queue>

using namespace std;

int main()
{

   queue<int> q;
   q.push(5);
   q.push(15);
   q.push(25);
   q.push(55);

   cout << "queue size: " << q.size() << endl;

   // delete element
   q.pop();
   cout << "queue size: " << q.size() << endl;

   // is queue empty?
   if (q.empty())
      cout << "Queue is empty" << endl;
   else
      cout << "Queue is not empty" << endl;

   cout<<"Front element of queue: "<<q.front()<<endl; 

   return 0;
}