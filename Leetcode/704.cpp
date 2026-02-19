#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarysearch(vector<int> nums, int target, int s, int e)
{

    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            s = mid + 1;
        }
        else if (target < nums[mid])
        {
            e = mid - 1;
        }
    }

    return -1;
}

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

    int target;
    cout << "enter the target: ";
    cin >> target;
    int s = 0;
    int e = nums.size() - 1;
    // int index = -1;

    int finalIndex = binarysearch(nums, target, s, e);
    cout << finalIndex;

    return 0;
}