#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    bool x = 0;

    long long y = 0;

    for (int i = 0;; i++)
    {

        if (y == n || y == n +1 || y == n -1)
        {
            x = 1;
            break;
        }
        else if (y > n)
            break;
        y = y + pow(3, i);
        // i++;
    }

    cout << x;

    return 0;
}