#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int i = 0;
    int final = INT_MAX;
    while (i < nums.size())
    {

        if (nums[i] < final)
        {
            final = nums[i];
        }
        i++;
    }

    cout << final;

    return 0;
}