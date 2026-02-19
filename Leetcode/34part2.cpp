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

    int index = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            index = i;
            break;
        }
    }

    int index2 = -1;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            index2 = i;
            break;
        }
    }

    cout << "[" << index << "," << index2 << "]";

    return 0;
}