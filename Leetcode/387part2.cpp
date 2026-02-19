#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

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

    vector<char> a;

    if (s.size() == 1)
    {
        index = 0;
    }
    else
    {
        while (i < s.size() && j < s.size())
        {

            if (s[i] == s[j])
            {
                a.push_back(s[i]);
                s.erase(j, 1);
                s.erase(i, 1);
            }
            else
            {
                j++;
            }

            if (j >= s.size())
            {
                i++;
                j = i + 1;
            }

            if (s[i] != s[j] && j == s.size() - 1)
            {
                find = s[i];
                break;
            }
        }
    }

    // while (i < s.size() && j < s.size())
    // {

    //     if (s[i] == a[j])
    //     {

    //         s.erase(j, 1);
    //         a.erase(j, 1);
    //     }
    // }

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