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

    // C.push_back(0);

    for (int i = 0; i < A.size(); i++)
    {

        unordered_map<int, int> mp;
        int count = 0;

        for (int j = 0; j <= i; j++)
        {
            mp[A[j]]++;
            mp[B[j]]++;
        }

        for (auto i : mp)
        {

            if (i.second > 1)
                count++;
        }

        C.push_back(count);
    }

    cout << "C: ";
    for (int i = 0; i < C.size(); i++)
    {

        cout << C[i] << " ";
    }

    return 0;
}