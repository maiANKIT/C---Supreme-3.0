#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    int max = INT_MIN;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }

    cout << "max value of array is: " << max << endl;

    int index = -1;

    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (max == nums[i])
        {
            index = i;
        }
    }

    cout << index;

    // int s = 0;
    // int e = nums.size() - 1;
    // int m = s + (e - s) / 2;

    // int i = 0;
    // while (s > e)
    // {

    //     if (nums[m] == max)
    //     {
    //         index = m;
    //         break;
    //     }
    //     else if (max > nums[m])
    //     {
    //         s = m + 1;
    //     }
    //     else if (max < nums[m])
    //     {
    //         e = m - 1;
    //     }

    //     m = s + (e - s) / 2;
    // }

    // cout << "index is: " << m << endl;

    return 0;
}