#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int count = 0;
    int product1 = 1;
    int product2 = 1;

    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        int x = max(nums[nums.size() - 1 - j], -1 * nums[i]);
        cout << "x: " << x << endl;
        if (x == -1 * nums[i])
        {
            product = product * x * (-1);
        }
        else
        {
            // cout << "c-5" << endl;
            product = product * x;
            j++;
        }
    }

    cout << product;

    return 0;
}