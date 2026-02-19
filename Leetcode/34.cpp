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
    cout << "enter the array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "enter the target: ";
    cin >> target;

    int start = 0;
    int end = nums.size() - 1;
    int mid = start - ((end - start) / 2);

    int index = -1;

    while (start <= end)
    {
        if (target == nums[mid])
        {
            index = mid;
            break;
        }
        if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }

    cout << index;

    return 0;
}