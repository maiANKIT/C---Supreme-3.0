#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    string t;

    cout << "Enter string s ";
    cin >> s;

    cout << "Enter string t ";
    cin >> t;

    int s_size = s.length();
    int t_size = t.length();

    int count = 0;
    int count2 = 0;

    for (int i = 0; i < s_size; i++)
    {
        for (int j = 0; j < t_size; j++)
        {
            if (s[i] == t[j])
            {
                count++;
                s.replace(i, 1, "0");
                //  continue;
                //  break;
            }
        }
    }

    cout << s << endl;
    cout << t << endl;
    cout << count << endl;

    if (s_size == count)
    {
        cout << "both are anagram" << endl;
    }
    else
    {
        cout << "both are not anagram" << endl;
    }

    return 0;
}