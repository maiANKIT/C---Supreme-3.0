#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int &i : nums)
        cin >> i;

    // int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        int j = i;

        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j - 1], nums[j]);
            j--;
        }
    }

    for (int i : nums)
        cout << i << " ";

    return 0;
}