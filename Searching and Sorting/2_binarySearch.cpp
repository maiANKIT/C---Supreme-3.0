#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }

    return -1;
}

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

    int target;
    cout << "enter the target: ";
    cin >> target;

    int indexOftarget = binarySearch(nums, target, nums.size());

    if (indexOftarget == -1)
    {
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        indexOftarget = binarySearch(nums, target, nums.size());
    }

    cout << indexOftarget;

    // sort(nums.begin(), nums.end());

    return 0;
}