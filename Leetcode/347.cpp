#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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

    int k;
    cout << "enter k: ";
    cin >> k;

    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    sort(nums.begin(), nums.end());
    vector<int> x;
    int count = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums.size() > 1 && nums[i] == nums[i + 1])
            count++;
        else if (nums.size() > 1 && nums[i] != nums[i + 1])
        {
            x.push_back(count);
            count = 0;
        }
    }

    sort(x.begin(), x.end());
    for (int i = x.size() - 1; i >= k; i--)
    {
    }

    return 0;
}