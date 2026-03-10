#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> add(vector<int> nums, int add1)
{

    for (int i = 0; i <= add1; i++)
    {
        nums[i] = nums[i] + 1;
    }

    sort(nums.begin(), nums.end());

    return nums;
}

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

    sort(nums.begin(), nums.end());

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.size() > 1 && nums[i] != nums[i + 1])
        {
            count++;
            break;
        }
    }

    if (count > 0)
    {

        int max = nums[nums.size() - 1];

        nums = add(nums, nums.size() - 1);

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.size() > 1 && nums[i] != nums[i + 1])
            {
                add(nums, nums.size() - 1);
                // break;
            }
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}