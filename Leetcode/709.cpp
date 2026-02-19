#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 64 && s[i] < 91)
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    cout << s;

    return 0;
}