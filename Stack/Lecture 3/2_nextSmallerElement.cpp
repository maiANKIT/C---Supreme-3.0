#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    stack<int> s;

    s.push(-1);

    vector<int> ans(v.size());

    for (int i = v.size() - 1; i >= 0; i--)
    {

        int curr = v[i];

        while (s.top() >= curr)
        {

            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }

    cout << "printing: " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}