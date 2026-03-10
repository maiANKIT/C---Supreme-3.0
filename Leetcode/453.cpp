#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> add(vector<int> &nums, int &x)
{

    sort(nums.begin(), nums.end());
    // base case
    // int count = 1;
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     if (nums.size() > 1 && nums[i] == nums[i + 1])
    //     {
    //         count++;
    //     }
    // }

    // if (count == nums.size())
    // {
    //     return nums;
    // }

    if (nums[0] == nums[nums.size() - 1])
        return nums;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i] + 1;
    }

    // sort(nums.begin(), nums.end());

    x++;
    return add(nums, x);
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

    // sort(nums.begin(), nums.end());

    // int count = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums.size() > 1 && nums[i] != nums[i + 1])
    //     {
    //         count++;
    //         break;
    //     }
    // }

    // if (count > 0)
    // {
    int x = 0;
    int add1 = nums.size() - 1;
    nums = add(nums, x);
    // }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl
         << x;

    return 0;
}