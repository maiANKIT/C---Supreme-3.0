#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    char letter;
    cin >> letter;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == letter)
            count++;
    }

    cout << "count: " << count << " " << "size: " << s.size() << endl;

    float y = ((float)count / s.size()) * 100;

    int z = y;

    cout << z;

    return 0;
}