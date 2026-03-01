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

    int count0 = 0;
    int countNeg = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == 0)
        {
            count0++;
            break;
        }
        else if (nums[i] < 0)
        {
            countNeg++;
        }
    }

    if (count0 == 1)
    {
        cout << 0;
    }
    else if (countNeg % 2 == 1)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }

    return 0;
}