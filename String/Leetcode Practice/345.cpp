#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    getline(cin, s);
    int count = 0;

    for (int i = 0; i < (s.size() / 2); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
        {
            for (int j = s.size() - count - 1; j > i; j--)
            {
                if (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u')
                {
                    swap(s[i], s[j]);
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            continue;
        }
    }

    cout << s;

    return 0;
}