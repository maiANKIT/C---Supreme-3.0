#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string s: ";
    cin >> s;

    string t = s;
    char find = '@';

    int i = 0;
    int j = i + 1;
    int index = -1;

    while (i < s.size() && j < s.size())
    {

        if (s[i] == s[j])
        {
            i++;
            j++;
            s.erase(i, 1);
            s.erase(j, 1);
        }
        else if (s[i] != s[j] && j < s.size())
        {
            j++;
        }
        else
        {
            i++;
        }

        if (j == s.size() && s[i] != s[j] && i < j)
        {
            // index = i;
            find = s[i];
            break;
        }
        else if (j == s.size())
        {
            j = i + 1;
        }

        // index = i;
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == find)
        {
            index = i;
        }
    }

    cout << index;

    return 0;
}