#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    // int n;
    // cout << "enter n: ";
    // cin >> n;

    string s;

    getline(cin, s);

    int size = -1;

    int count = 0;

    cout << s.size() << endl;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            break;
        }
        else
        {
            s.erase(i, 1);
        }
    }

    cout << s << endl;

    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (s[i] != ' ')
        {
            count++;
        }

        if (s[i] == ' ')
        {
            break;
        }
    }

    cout << count;

    return 0;
}