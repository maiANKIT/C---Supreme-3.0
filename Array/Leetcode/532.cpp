#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of nums: ";
    cin >> n;

    int nums[n];
    cout << "enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // int nums2[]

    int size = (sizeof(nums)) / (sizeof(nums[0]));

    int k;
    cout << "enter the k-diff: ";
    cin >> k;

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == i)
            {
                break;
            }
            else if (((nums[j] - nums[i]) == k) || (nums[j] - nums[i]) == -k)
            {
                count++;
                // break;
            }
        }
    }

    cout << count;

    return 0;
}