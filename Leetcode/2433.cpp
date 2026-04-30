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

    vector<int> arr(pref.size());

    arr[0] = pref[0];

    for (int i = 1; i < pref.size(); i++)
    {

        arr[i] = pref[i] ^ pref[i-1];
        
    }

    for (int i = 0; i < pref.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}