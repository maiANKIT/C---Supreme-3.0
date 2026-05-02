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

    int x = 0;

    int a = 0, b = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i] ^ nums[i + 1] == 0)
        {
            a = nums[i];
            // b = nums[i] + 1;
            // break;
        }

        if (x == 0 && nums[i] != i + 1)
        {
            b = i + 1;
            x = 1;
        }
    }

    cout << a << " " << b;

    return 0;
}