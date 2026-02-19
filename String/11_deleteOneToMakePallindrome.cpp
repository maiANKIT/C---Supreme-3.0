#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int count = 0;
    bool x = false;

    for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
    {

        if (s[i] == s[j] && s.size() == 3)
        {
            count = 2;
        }
        else if (s[i] == s[j])
        {
            x = true;
        }

        else if (s[i] != s[j])
        {
            count++;
        }
    }

    if (count == 2 && s.size() % 2 == 0)
    {
        cout << "palindrome";
    }
    else if (count == 2 && s.size() % 2 != 0)
    {
        cout << "pallindrome";
    }
    else if (x == true)
    {
        cout << "pallindrome";
    }

    else
    {
        cout << "not a pallindrome";
    }

    return 0;
}