#include <iostream>
#include <queue>

using namespace std;

int main()
{

   // creation
   priority_queue<int> pq;
   // max-heap -> maximum value -> highest priority

   pq.push(10);
   // 10
   pq.push(25);
   // 25 10
   pq.push(55);
   // 55 25 10
   pq.push(21);
   // 55 25 21 10

   // top element -> highest priority element
   cout << pq.top() << endl;

   pq.pop();
   // top ka element(maximum) erase hoga
   cout << pq.top() << endl;

   cout << pq.size() << endl;

   return 0;
}