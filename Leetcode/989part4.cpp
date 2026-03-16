#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    int x = k;

    while ()

        cout << "num: " << x << endl;
    int sum = x + k;
    cout << "sum: " << sum << endl;

    vector<int> final;

    while (sum > 0)
    {
        final.push_back(sum % 10);
        sum = sum / 10;
    }

    reverse(final.begin(), final.end());

    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}