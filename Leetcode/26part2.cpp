#include <iostream>
#include <set>
#include <vector>

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

    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    // for (auto it : s)
    // {
    //     cout << it << " ";
    // }

    cout << endl;

    vector<int> nums2;

    for (int i = 0; i < s.size(); i++)
    {
        auto it = s.begin();
        advance(it, i);
        // nums2[i] = *it;
        nums2.push_back(*it);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }

    return 0;
}