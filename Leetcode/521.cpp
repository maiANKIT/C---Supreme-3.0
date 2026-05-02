#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    int count = 0;

    int maxi = -1;

    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] != b[i])
        {
            count++;
        }
        else if (a[i] == b[i])
            count = 0;

        maxi = max(maxi, count);
    }

    cout << maxi;

    return 0;
}