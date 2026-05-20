#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> A(n);
    cout << "enter A's values: ";
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    vector<int> B(n);
    cout << "enter B's values: ";
    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    vector<int> C;

    unordered_map<int, int> mp;

    int count = 0;

    for (int i = 0; i < A.size(); i++)
    {

        mp[A[i]]++;

        if (mp[A[i]] == 2)
            count++;

        mp[B[i]]++;
        if (mp[B[i]] == 2)
            count++;

        C.push_back(count);
    }

    cout << "C: ";
    for (int i = 0; i < C.size(); i++)
    {

        cout << C[i] << " ";
    }

    return 0;
}