#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int sum = 0;
    int x = -1;
    int count = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] - nums[i] == 1)
        {
            count++;
        }
        else
        {
            x = i;
            break;
        }
    }

    for (int i = 0; i <= count; i++)
    {
        sum = sum + nums[i];
    }

    cout << "sum: " << sum << endl;

    sort(nums.begin(), nums.end());

    int i = 0;
    while (i < nums.size())
    {

        if (nums[i] == sum)
        {
            sum++;
        }
        else if (nums[i] < sum)
        {
            i++;
        }
        else if (nums[i] > sum)
        {
            break;
        }
    }

    cout << sum;

    return 0;
}