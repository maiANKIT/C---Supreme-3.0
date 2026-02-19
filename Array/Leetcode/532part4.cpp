#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

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

    int k;
    cout << "enter the value of k: ";
    cin >> k;

    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    int i = 0;
    int j = 1;

    while (j < nums.size())
    {

        int diff = nums[j] - nums[i];

        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
        {
            j++;
        }
    }

    cout << ans.size() << endl;

    return 0;
}