#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long y = 0;

    long long x = n;

    if (n >= 1000000000)
    {
        n = n - 1000000000;
        y = y + 3 * n + 2 * 1000000000 + 1 * 1000000 - 1000 + 1;
    }
    else if (n >= 1000000)
    {
        n = n - 1000000;
        y = y + 2 * n + 1 * 1000000 - 1000 + 1;
    }
    else if (n > 1000)
    {
        n = n - 1000;
        y = y + 1 * n;
    }

    y = y + 1;

    if (x < 1000)
    {
        y = 0;
    }

    cout << y;

    return 0;
}