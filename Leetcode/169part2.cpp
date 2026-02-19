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
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = 1;
    int count = 0;
    vector<int> times;

    while (i >= nums.size())
    {

        if (nums[i] == nums[j])
        {
            count++;
            nums.erase(nums.begin() + j);
            j++;
        }
        else
        {
            times.push_back(count);
            i++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < times.size(); i++)
    {
        cout << times[i] << " ";
    }

    return 0;
}