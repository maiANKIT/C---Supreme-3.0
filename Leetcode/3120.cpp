#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    cout << "enter word: ";
    cin >> word;

    unordered_map<char, int> mp;
    for (int i = 0; i < word.size(); i++)
    {
        mp[word[i]]++;
    }

    string s, t;
    for (auto i : mp)
    {

        if (i.first >= 'a' && i.first <= 'z')
            s = s + i.first;
        else
            t = t + i.first;
    }

    int count = 0;
    int i = 0;
    int j = 0;

    while (i < s.size() && j < t.size())
    {

        if (s[i] - t[j] == 32)
        {

            count++;
            i++;
            j++;
        }
        else if (s[i] - t[j] < 32)
            j++;
        else
            i++;
    }

    cout << count;

    return 0;
}