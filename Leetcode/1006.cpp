#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int count = 0;

    long long sum = n;

    n--;

    while (n > 0)
    {

        if (count == 0)
        {
            sum = sum * n;
            count++;
            n--;
        }
        else if (count == 1)
        {
            sum = sum / n;
            count++;
            n--;
        }
        else if (count == 2)
        {
            sum = sum + n;
            n--;
            count++;
        }
        else if (count == 3)
        {
            sum = sum - n;
            n--;
            count = 0;
        }
    }

    cout << sum;

    return 0;
}