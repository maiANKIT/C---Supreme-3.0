#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int final = 0;

    if (nums.size() > 1)
    {

        final = nums[nums.size() - 1] - nums[nums.size() - 2];
    }

    cout << final;

    return 0;
}