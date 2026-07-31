#include <bits/stdc++.h>

using namespace std;

void reverseK(queue<int> &q, int k)
{

    if (k > q.size())
        return;

    // step a: queue k element
    stack<int> s;

    int x = 0;
    while (x < k)
    {
        s.push(q.front());
        q.pop();
        x++;
    }

    x = 0;

    while (x < k)
    {
        q.push(s.top());
        s.pop();
        x++;
    }

    x = 0;

    while (q.size() - k > x)
    {
        q.push(q.front());
        q.pop();
        x++;
    }
}

int main()
{

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseK(q, 7);

    cout << "printing queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}