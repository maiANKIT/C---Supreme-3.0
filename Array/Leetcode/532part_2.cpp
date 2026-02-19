#include <iostream>
#include <set>
#include <vector>
#include <cmath>
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

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    set<int> s(nums.begin(), nums.end());
    cout << endl
         << "sets contains: ";
    for (int x : s)
    {
        cout << x << " ";
    }

    vector<int> nums2(s.begin(), s.end());

    cout << "size of set is: " << s.size() << endl;

    int k;
    cout << "enter the k value: ";
    cin >> k;

    int count = 0;

    for (int i = 0; i < nums2.size(); i++)
    {
        for (int j = i + 1; j < nums2.size(); j++)
        {

            if (abs(nums2[i] - nums2[j]) == k)
            {
                count++;
            }
        }
    }

    cout << "final value is: " << count;

    return 0;
}