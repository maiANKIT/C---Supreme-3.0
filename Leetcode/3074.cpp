#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter sizeA: ";
    cin >> n;

    int m;
    cout << "enter sizeC: ";
    cin >> m;

    cout << "enter apple: ";
    vector<int> apple(n);
    for (int i = 0; i < apple.size(); i++)
    {
        cin >> apple[i];
    }

    cout << "enter capacity: ";
    vector<int> capacity(m);
    for (int i = 0; i < m; i++)
    {
        cin >> capacity[i];
    }

    int appleSum = 0;

    for (int i = 0; i < n; i++)
    {
        appleSum = appleSum + apple[i];
    }

    sort(capacity.begin(), capacity.end());

    int count = 0;

    int i = capacity.size() - 1;

    while (appleSum > 0)
    {
        appleSum = appleSum - capacity[i];
        i--;
        count++;
    }

    cout << count;

    return 0;
}