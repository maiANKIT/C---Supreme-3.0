#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<int> nums2;
    int k = 1;
    int i = 0;

    while (i < nums.size() && k <= nums.size())
    {

        if (nums[i] == k)
        {
            k++;
            i++;
        }
        else if (i == nums.size() - 1 && nums[i] <= k)
        {
            nums2.push_back(k);
            k++;
        }
        else if (nums[i] < k)
        {
            i++;
        }
        else if (nums[i] > k)
        {
            nums2.push_back(k);
            k++;
        }
    }

    cout << "nums2 size: " << nums2.size() << endl;

    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }

    return 0;
}