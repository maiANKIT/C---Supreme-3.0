#include <iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int i = 0;
    int j = s.size() - 1;
    int x = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            // cout << "not pallindrome" << endl;
            x = 0;
            break;
        }
        i++;
        j--;
    }

    if (x == 1)
    {
        cout << "pallindrome";
    }
    else
    {
        cout << "not pallindrome";
    }

    return 0;
}