#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the array: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> nums1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1] && nums.size() == i + 2)
        {
            nums1.push_back(nums[i]);
            nums1.push_back(nums[i + 1]);
        }
        else if (nums[i] == nums[i + 1])
        {
            nums1.push_back(nums[i]);
        }
        if (nums1.size() == 2)
        {
            break;
        }
    }

    cout << "nums1: ";
    for (int i = 0; i < nums1.size() - 1; i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}