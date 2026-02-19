#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string haystack;
    cout << "enter haystack: ";
    cin >> haystack;

    string needle;
    cout << "enter needle: ";
    cin >> needle;

    int x = -1;

    if (haystack == needle)
    {
        x = 0;
    }
    else if (haystack.size() < needle.size())
    {
    }
    else
    {
        for (int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {

            if (haystack.substr(i, needle.size()) == needle)
            {

                cout << haystack.substr(i, needle.size()) << endl;
                x = i;
                break;
            }
        }
    }

    cout << x;

    return 0;
}