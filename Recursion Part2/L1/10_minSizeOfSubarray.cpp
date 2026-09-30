#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int target)
{

    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {

        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    int target;
    cout << "enter target: ";
    cin >> target;

    vector<int> nums(n);
    cout << "Enter values: ";
    for (int &x : nums)
        cin >> x;

    int ans = solve(nums, target);

    cout << ans;

    return 0;
}