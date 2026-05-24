#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &s, int target)
{

    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, target);

    s.push(topElement);

}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int target = s.top();
    s.pop();

    insertAtBottom(s, target);

    while (!s.empty())
    {

        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}