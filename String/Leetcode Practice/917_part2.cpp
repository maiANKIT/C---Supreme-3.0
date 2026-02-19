#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    int l = 0, h = s.size() - 1;

    while (l < h)
    {
        if (isalpha(s[l]) && isalpha(s[h]))
        {
            swap(s[l], s[h]);
            l++, h--;
        }
        else if (!isalpha(s[l]))
        {
            l++;
        }
        else
        {
            h--;
        }
    }

    cout << s;

    return 0;
}