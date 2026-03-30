#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> nums2 = nums;
    sort(nums2.begin(), nums2.end());

    int s = nums.size();
    vector<int> div;
    for (int i = 1; i <= nums.size(); i++)
    {
        if (s % i == 0)
        {
            div.push_back(i);
        }
    }

    for (int i = 0; i < div.size(); i++)
    {
        cout << div[i] << " ";
    }

    for(int i = 0; )

    

    return 0;
}