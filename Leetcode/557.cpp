#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    // cout << "enter s: ";
    getline(cin, s);

    stringstream ss(s);

    string sss = "";
    string m = "";

    while (ss >> sss)
    {
        reverse(sss.begin(), sss.end());
        m = m + sss + " ";
    }

    cout << m;

    return 0;
}