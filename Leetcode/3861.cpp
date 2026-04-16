#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> capacity(n);
    cout << "enter valuse: ";
    for (int i = 0; i < capacity.size(); i++)
    {
        cin >> capacity[i];
    }

    int x = INT_MAX;

    int a = -1;
    int b = capacity.size() - 1;

    int itemSize;
    cout << "enter itemSize: ";
    cin >> itemSize;

    for (int i = 0; i < capacity.size(); i++)
    {

        if (i >= itemSize && capacity[i] <= x)
        {
            x = capacity[i];
            b = a;
            a = min(i, b);
        }
    }

    cout << a;

    return 0;
}