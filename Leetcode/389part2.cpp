#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    string s;
    cout << "enter the s: ";
    cin >> s;

    string t;
    cout << "enter the t: ";
    cin >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << endl;
    char x = '!';

    for (int i = 0, j = 0; i < t.size(), j < s.size(); i++, j++)
    {
        if (t[i] != s[j])
        {
            x = t[i];
            break;
        }
    }
    if (x == '!')
    {
        x = t[t.size() - 1];
    }

    cout << x;

    return 0;
}