#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the values: ";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int count = 1;
    int x = -1;

    int i = 0;

    while (i < nums.size() - 2)
    {

        if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2])
        {
            nums.erase(nums.begin(), nums.begin() + 3);
        }
        else
        {
            x = nums[i];
            break;
        }
    }

    cout << "ans: " << x;

    return 0;
}