#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    int k;
    cout << "enter k: ";
    cin >> k;

    for (int i = 0; i < k / 2; i++)
    {

        char temp = s[i];
        s[i] = s[k - i - 1];
        s[k - i - 1] = temp;
    }

    cout << s;

    return 0;
}