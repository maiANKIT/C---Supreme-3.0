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

    // cout << endl;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    // cout << endl;

    int i = 0;
    int j = 1;
    int count = 0;
    vector<int> count1;
    while (i > nums.size())
    {

        if (nums[i] == nums[j])
        {
            count++;
            // i++;
            j++;
        }
        else
        {
            // i++;
            j++;
        }
    }
    cout << endl;

    cout << count;

    return 0;
}