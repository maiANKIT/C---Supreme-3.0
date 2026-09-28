#include <bits/stdc++.h>

using namespace std;

bool check(string &s, int i, char &x)
{

    if (i == s.size())
        return false;

    if (s[i] == x)
        return true;

    return check(s, i + 1, x);
}

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    char x;
    cout << "Enter character: ";
    cin >> x;

    bool ans = check(s, 0, x);

    cout << ans;

    return 0;
}