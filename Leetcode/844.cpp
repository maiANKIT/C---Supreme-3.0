#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    string t;
    cout << "enter t: ";
    cin >> t;

    string a = "";
    string b = "";

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '#')
            i--;
        else
            a = s[i] + a;
    }

    for (int i = t.size() - 1; i >= 0; i--)
    {
        if (t[i] == '#')
            i--;
        else
            b = t[i] + b;
    }

    cout << "s: " << a << endl;
    cout << "t: " << b << endl;

    return 0;
}