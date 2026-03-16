#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long y = 0;

    long long x = n;
    for (int i = 0; 0 <= n; i++)
    {
        if (n > 999999999999)
        {
            y = y + 4;
        }
        else if (n > 999999999)
        {
            y = y + 3;
        }
        else if (n > 999999)
        {
            y = y + 2;
        }
        else if (n > 999)
        {
            y = y + 1;
        }
        else if (n < 1000)
        {
            break;
        }
        n = n - 1;
    }

    if (x < 1000)
    {
        y = 0;
    }

    cout << y;

    return 0;
}