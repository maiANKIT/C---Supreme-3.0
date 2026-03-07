#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    bool x = 1;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s.size() > 1 && s[i] == '0' && s[i + 1] == '1')
        {
            x = 0;
            break;
        }
    }

    cout << x;

    return 0;
}