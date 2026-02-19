#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    int k;
    cout << "enter the k: ";
    cin >> k;

    sort(nums.begin(), nums.end());

    vector<int> new1;
    int i = 0;
    int j = 0;

    while (i < nums.size() && j < nums.size())
    {

        if (j - i == k - 1)
        {
            new1.push_back(nums[j] - nums[i]);
            // new1.push_back(nums[j]);
            i++;
            j++;
        }
        else if (j - i > k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < new1.size(); i++)
    {
        cout << new1[i] << " ";
    }

    sort(new1.begin(), new1.end());

    cout << endl;

    // int min = INT_MIN;

    int i1 = 0;
    int final = INT_MAX;
    while (i1 < new1.size())
    {

        if (new1[i1] < final)
        {
            final = new1[i1];
        }
        i1++;
    }

    cout << final;

    // for (int i = 0; i < new1.size(); i++)
    // {
    //     cout << new1[i] << " ";
    // }

    // cout << endl
    //      << new1[new1.size() - 1] - new1[new1.size() - 2];

    return 0;
}