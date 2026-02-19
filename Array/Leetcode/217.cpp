#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = i + 1;
    bool x = 0;
    while (i < nums.size())
    {

        if (j == nums.size())
        {
            i++;
            j = i + 1;
            continue;
        }
        else if (nums[i] == nums[j])
        {
            x = 1;
            break;
        }
        else if (j <= nums.size())
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << x;

    return 0;
}