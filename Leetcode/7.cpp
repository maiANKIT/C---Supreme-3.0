#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cout << "enter x: ";
    cin >> x;

    int n = 1;
    if (x < 0)
        n = -1;

    x = x * n;

    int f = 0;

    while (x > 0)
    {
        int y = x % 10;
        f = f * 10 + y;

        x = x / 10;
    }

    cout << n * f;

    return 0;
}