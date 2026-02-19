#include <iostream>
#include <string>
#include <algorithm>

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

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << s << endl;
    cout << count << endl;

    if (s == t)
    {
        cout << "anagram" << endl;
    }
    else
    {
        cout << "not an anagram" << endl;
    }

    return 0;
}