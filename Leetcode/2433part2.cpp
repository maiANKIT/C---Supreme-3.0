#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> pref(n);
    cout << "enter values: ";
    for (int i = 0; i < pref.size(); i++)
    {
        cin >> pref[i];
    }
    int x = pref[0];

    for (int i = 1; i < pref.size(); i++)
    {
        // x = pref[i -1];
        pref[i] = pref[i] ^ x;
        x = pref[i - 1];
    }

    for (int i = 0; i < pref.size(); i++)
    {
        cout << pref[i] << " ";
    }

    return 0;
}