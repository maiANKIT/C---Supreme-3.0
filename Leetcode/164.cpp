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
    cout << "enter the vector: ";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int size1 = 0;

    sort(nums.begin(), nums.end());

    if (nums.size() > 1)
    {

        int k = INT_MIN;
        for (int i = 0; i < nums.size() - 1; i++)
        {

            size1 = max((nums[i + 1] - nums[i]), k);
            if (size1 > k)
            {
                k = size1;
            }
        }
    }

    cout << size1;

    return 0;
}