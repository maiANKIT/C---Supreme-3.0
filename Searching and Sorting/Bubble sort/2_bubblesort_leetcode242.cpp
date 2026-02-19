#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    string t;

    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }

    cout << "sorted s" << endl;
    cout << s;

    for (int i = 0; i < t.length(); i++)
    {
        for (int j = 0; j < t.length() - i - 1; j++)
        {
            if (t[j] > t[j + 1])
            {
                swap(t[j], t[j + 1]);
            }
        }
    }

    cout << endl
         << "sorted t" << endl;
    cout << t;

    if (s == t)
    {
        cout << "anagram" << endl;
    }
    else
    {
        cout << "not an anagram";
    }

    return 0;
}