#include <bits/stdc++.h>

using namespace std;

int maxi(vector<int> nums, int i, int maxValue)
{

    if (i >= nums.size() - 1)
        return maxValue;

    int maxiV = max(maxValue, nums[i]);

    return maxi(nums, i+1, maxiV); //jb void nhi hoga tb return use karenge
}

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int maxAns = maxi(nums, 0, INT_MIN);

    cout << maxAns;

    return 0;
}