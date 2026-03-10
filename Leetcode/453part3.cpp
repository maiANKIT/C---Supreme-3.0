#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> add(vector<int> &nums, int &x)
{

    sort(nums.begin(), nums.end());

    if (nums[0] == nums[nums.size() - 1])
        return nums;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums[i] = nums[i] + 1;
    }

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

    int x = 0;
    int add1 = nums.size() - 1;
    nums = add(nums, x);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl
         << x;

    return 0;
}