#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the s: ";
    cin >> s;

    string t;
    cout << "enter the t: ";
    cin >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << endl;
    cout << endl;

    for (int i = 0; i < t.size() - s.size() + 1; i++)
    {
        if (t.substr(i, s.size()) == s)
        {
            cout << t.substr(i, s.size()) << endl;

            t.erase(i, s.size());

            break;
        }
        // break;
    }

    char a = t[0];
    cout << "size of t: " << t.size() << endl;

    cout << t;

    return 0;
}