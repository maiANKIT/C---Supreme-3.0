#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    getline(cin, s);

    string x = "";
    int y = 1;
    for (int i = 0; i < s.size(); i++)
    {

        if (i > 1 && !(s[i - 1] >= '0' && s[i - 1] <= '9') && s[i] == '0')
        {
            continue;
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            x = x + s[i];
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        else if (i > 1 && (s[i - 1] >= '0' && s[i - 1] <= '9') && s[i] == '-')
        {
            break;
        }
        else if (s[i] == '-')
        {
            y = -1;
        }
        else
        {
            break;
        }
    }

    cout << x;

    return 0;
}