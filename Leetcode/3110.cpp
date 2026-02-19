#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {

        sum = sum + abs(s[i + 1] - s[i]);
    }

    cout << sum;

    return 0;
}