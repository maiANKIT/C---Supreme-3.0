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

    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        temp.push_back(nums[i]);
    }

    sort(temp.begin(), temp.end());

    vector<int> final;

    int i = 0;
    while (i < nums.size())
    {

        if (nums[i] == temp[i] && nums[i] == nums[i + 1] && i < nums.size() - 1)
        {
            nums[i] = i;
            nums[i + 1] = i;
            i = i + 2;
        }
        else if (nums[i] == temp[i])
        {
            nums[i] = i;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << "final value: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}