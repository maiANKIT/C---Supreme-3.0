#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    int maxi = 0;

    string c = "";

    for (int i = 0; i < s.size(); i++)
    {

        string a = "";

        for (int j = i; j < s.size(); j++)
        {
            a = a + s[j];
            string b = a;
            reverse(a.begin(), a.end());
            if (a == b)
            {
                int size = a.size();

                if (maxi < max(maxi, size))
                {

                    maxi = max(maxi, size);
                    c = b;
                }
            }
            a = b;
        }
    }

    cout << "maxi size: " << maxi << endl;
    cout << "string: " << c << endl;

    return 0;
}