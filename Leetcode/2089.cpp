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

    int target;
    cout << "enter the target value: ";
    cin >> target;

    sort(nums.begin(), nums.end());
    vector<int> final;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            final.push_back(i);
        }

        if (nums[i] > target)
        {
            break;
        }
    }

    cout << "final ans: ";
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}