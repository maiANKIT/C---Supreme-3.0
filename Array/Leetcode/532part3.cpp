#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{

    int n;
    cout << "enter the numbers of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cin >> nums[i];
    }

    cout << endl
         << "entered values are: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    sort(nums.begin(), nums.end());

    vector<pair<int, int>> pairStore;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            pairStore.push_back({nums[i], nums[j]});
        }
    }

    set<pair<int, int>> uniquePairs(pairStore.begin(), pairStore.end());

    int sSize = uniquePairs.size();

    int count = 0;
    int k;
    cout << endl
         << "enter the k-diff: ";
    cin >> k;

    for (auto p : uniquePairs)
    {
        if (abs(p.first - p.second) == k)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}