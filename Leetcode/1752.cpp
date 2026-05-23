#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i + 1] >= nums[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    if (count == nums.size())
    {
    }
    else
    {

        rotate(nums.begin(), nums.begin() + count, nums.end());
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}