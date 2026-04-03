#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int count = 0;
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            count++;
            j--;
        }
    }

    cout << count;

    return 0;
}