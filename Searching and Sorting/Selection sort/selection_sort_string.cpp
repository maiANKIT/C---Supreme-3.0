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
        for (int j = i; j < s.length(); j++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout << "sorted s" << endl;
    cout << s;

    for (int i = 0; i < t.length(); i++)
    {
        for (int j = i; j < t.length(); j++)
        {
            if (t[i] > t[j])
            {
                swap(t[i], t[j]);
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