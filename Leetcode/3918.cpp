#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int n2 = n;
    int m = 0;

    while (n > 0)
    {

        m = m * 10 + n % 10;
        n = n / 10;
    }

    cout << "m: " << m << endl;

    int sum = 0;

    for (int i = min(m, n2); i <= max(m, n2); i++)
    {

        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            sum = sum + i;
    }

    cout << "enter sum: " << sum;

    return 0;
}