#include <bits/stdc++.h>

using namespace std;

bool checkSorted(vector<int> nums, int i)
{

    if(nums.size() == 1) return true;
    if (i == nums.size())
        return true;

    if (nums[i - 1] > nums[i])
        return false;

    return checkSorted(nums, i + 1);
}

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    bool x = checkSorted(nums, 1);

    cout << x;

    return 0;
}