#include <bits/stdc++.h>

using namespace std;

void print(vector<int> nums, int i)
{

    // base case
    if (i == nums.size())
        return;

    // cout << nums[i] << " ";

    print(nums, i + 1);

    //it will leads to reverse counting
    cout << nums[i] << " ";
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

    print(nums, 0);

    return 0;
}