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

    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cin >> nums[i];
    }

    int max = INT_MIN;
    int index = -1;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] > max)
        {
            max = nums[i];
            index = i;
        }
    }

    cout << "max value: " << max << endl;
    cout << "intial max index: " << index;

    for (int i = 0; i < nums.size(); i++)
    {

        if (max >= 2 * nums[i])
        {
        }
        else if (nums[i] != max)
        {
            index = -1;
            break;
        }
    }
    cout << endl;
    cout << "index: " << index;

    return 0;
}