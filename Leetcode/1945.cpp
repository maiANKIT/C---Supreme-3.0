#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    int k;
    cout << "enter k: ";
    cin >> k;

    string x = "";
    for (int i = 0; i < s.size(); i++)
    {

        int b = s[i] - 96;
        string a = to_string(b);
        x = x + a;
    }

    cout << x << endl;

    int sum = 0;

    for (int i = 0; i < x.size(); i++)
    {

        sum = sum + x[i] - 48;
    }

    cout << "t1: " << sum << endl;

    int t = 1;

    int z = 0;

    while (t < k)
    {
        z = 0;55.
        while (sum > 0)
        {

            z = z + sum % 10;
            sum = sum / 10;
        }
        sum = z;
        t++;
    }
    cout << "sum: " << z << endl;

    return 0;
}