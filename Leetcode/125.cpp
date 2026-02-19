#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    getline(cin, s);

    for (int i = 0; i < s.size();)
    {
        if (s[i] == ' ' || (s[i] >= 33 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
        {
            s.erase(i, 1);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 64 && s[i] < 96)
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    cout << s;

    bool x = 1;

    for (int i = 0; i < s.size() / 2; i++)
    {

        if (s[i] != s[s.size() - i - 1])
        {
            x = 0;
            break;
        }
    }

    cout << endl
         << x;

    return 0;
}