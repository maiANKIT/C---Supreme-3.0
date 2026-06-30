#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    int count = 0;

    for (int i = 2; i < s.size(); i++)
    {
        string a = "";
        a = a+ s[i - 2];
        a = a + s[i-1];

        for (int j = i; j < s.size(); j++)
        {

            a = a + s[j];
            size_t pos = a.find('a');
            size_t pos2 = a.find('b');
            size_t pos3 = a.find('c');

            if (pos != string::npos && pos2 != string::npos && pos3 != string::npos)
                count++;
        }
    }

    cout << count;

    return 0;
}