#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

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
    int count = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == count)
        {
            count++;
        }
    }

    cout << "ans: " << count;

    return 0;
}