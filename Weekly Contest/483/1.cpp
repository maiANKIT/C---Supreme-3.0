#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;
    cout << "enter the number: ";
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (s[i] == '2')
        {
            break;
        }
        else if (s[i] != '2')
        {
            s.erase(i, 1);
        }
    }

    cout << s;

    // if(s[s.size() - 1] != '2'){}

    return 0;
}