#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int search(vector<int> nums, int sum)
{
    bool y = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum == nums[i])
        {
            y = 1;
            break;
        }
        else if (sum < nums[i])
        {
            break;
        }
    }
}

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

    int sum = 0;
    int x = -1;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] - nums[i] == 1)
        {
            sum = sum + nums[i] + nums[i + 1];
            i++;
            cout << "sum is: " << sum << endl;
        }
        else
        {
            x = i;
            break;
        }
    }

    if (nums.size() % 2 != 0 && !(x <= nums.size()))
    {
        sum = sum + nums[nums.size() - 1];
    }

    sort(nums.begin(), nums.end());

    // if (nums[nums.size() - 1] < sum)
    // {
    //     cout << "ans: " << sum;
    // }
    // else
    // {
    //     sum = nums[nums.size() - 1] + 1;
    //     cout << "ans: " << sum;
    // }

    search(nums, sum);

    if (x = 0)

        return 0;
}