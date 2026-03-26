#include <iostream>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    getline(cin, s);

    string a = "";

    bool x = 1;

    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            // continue;
            i++;
            j--;
        }
        else if (s[i] != s[j] && s[i] == ' ')
        {
            i++;
        }
        else if (s[i] != s[j] && s[j] == ' ')
        {
            j--;
        }
        else if (s[i] != s[j] && (s[i] - 32 == s[j] || s[i] + 32 == s[j]))
        {
            i++;
            j--;
        }
        else if (s[i] != s[j] && (s[i] >= 0 && s[i] < 48) || (s[i] >= 58 && s[i] < 65) || (s[i] >= 91 && s[i] < 97) || (s[i] >= 123 && s[i] < 128))
        {
            i++;
        }
        else if (s[i] != s[j] && (s[j] >= 0 && s[j] < 48) || (s[j] >= 58 && s[j] < 65) || (s[j] >= 91 && s[j] < 97) || (s[j] >= 123 && s[j] < 128))
        {
            j--;
        }
        else
        {
            x = 0;
            break;
        }
    }

    cout << x;

    return 0;
}