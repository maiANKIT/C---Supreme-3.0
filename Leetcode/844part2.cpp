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

    for (int i = 0; i < s.size();)
    {

        if (s[0] == '#')
        {
            s.erase(0, 1);
            i--;
        }

        if (i > 0 && s[i] == '#')
        {
            s.erase(i - 1, 2);
            i--;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < t.size();)
    {
        if (t[0] == '#')
        {
            t.erase(0, 1);
            i--;
        }

        if (i > 0 && t[i] == '#')
        {
            t.erase(i - 1, 2);
            i--;
        }
        else
            i++;
    }

    cout << "s: " << s << endl;
    cout << "t: " << t << endl;

    return 0;
}