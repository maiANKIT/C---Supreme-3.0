#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // min heap -> minimum value ->  highest property
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(100);
    // 100
    pq.push(55);
    // 55 100
    pq.push(75);
    // 55 75 100

    cout << pq.top() << endl;
    pq.pop();
    // 75 100

    cout << pq.top() << endl;

    return 0;
}