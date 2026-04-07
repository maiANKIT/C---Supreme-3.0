#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    // cout << "enter s: ";
    getline(cin, s);

    int i = 0;

    string x = "";
    string y = "";

    while (i < s.size())
    {

        if (s[i] != ' ')
        {
            y = y + s[i];
        }
        else
        {
            reverse(y.begin(), y.end());
            x = x + y + " ";
            y = "";
        }
        i++;
    }

    reverse(y.begin(), y.end());
    x = x + y;

    cout << x;

    return 0;
}