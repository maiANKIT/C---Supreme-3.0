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
    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> count;
    int c = 1;

    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i] == nums[i + 1])
        {
            continue;
        }
        else if (nums[i + 1] - nums[i] == 1)
        {
            c++;
        }
        else if (nums[i + 1] - nums[i] > 1 && i < nums.size() - 1)
        {
            count.push_back(c);
            c = 1;
            continue;
        }
        else if (nums[i + 1] - nums[i] != 1 && i > nums.size() - 1)
        {
            count.push_back(c);
            break;
        }
    }

    cout << "final value: ";
    for (int i = 0; i < count.size(); i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}