#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
        cin >> nums[i];

    int k;
    cout << "enter k: ";
    cin >> k;

    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    vector<pair<int, int>> arr;

    for (auto i : mp)
    {

        arr.push_back({i.first, i.second});
    }

    sort(arr.begin(), arr.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.second > b.second; });

    nums.clear();

    int i = 0;
    for (auto &p : arr)
    {

        if (i < k)
        {
            nums.push_back(p.first);
        }
        else
            break;
        i++;
    }

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}