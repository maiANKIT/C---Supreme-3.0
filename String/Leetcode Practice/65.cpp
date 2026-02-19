#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // char c = 'a';
    // int a = c;
    // cout << c << endl;
    // cout << a << endl;

    string s;
    cout << "enter the string: ";
    cin >> s;

    bool x = 1;
    int size = s.size();

    int i = 0;

    sort(s.begin(), s.end());
    cout << s;

    // while (i < size)
    // {
    //     if (s[i] >= 48 && s[i] <= 57 && s[i] == 101 && s[i] == 69 && s[i] == 46 && s[i] == 45 && s[i] == 43)
    //     {

    //         i++;
    //         continue;
    //     }
    //     else
    //     {

    //         x = 0;
    //         break;
    //     }
    // }

    // cout << x;

    return 0;
}