#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    // vector<int> index;
    vector<char> vowel;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            // index.push_back(i);
            vowel.push_back(s[i]);
        }
    }

    if (vowel.size() > 0)
    {

        sort(vowel.begin(), vowel.end());

        int t = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                s[i] = vowel[t++];
            }
        }
    }

    cout << s << endl;

    return 0;
}