#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter cost: ";
    vector<int> cost(n);
    for (int i = 0; i < n; i++)
    {

        cin >> cost[i];
    }

    sort(cost.begin(), cost.end());
    int i = n - 1;

    int price = 0;

    while (i >= 1)
    {

        price = price + cost[i] + cost[i - 1];
        i = i - 3;
    }

    cout << "price: " << price;

    return 0;
}