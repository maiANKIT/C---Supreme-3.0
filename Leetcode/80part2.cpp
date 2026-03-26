#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> total;
    vector<int> t;
    int count = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i < nums.size() - 1 && nums[i] == nums[i + 1])
        {
            count++;
        }
        else
        {
            t.push_back(nums[i]);
            total.push_back(count);
            count = 1;
        }
    }

    cout << "final: ";
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;

    cout << "total: ";
    for (int i = 0; i < total.size(); i++)
    {
        cout << total[i] << " ";
    }
    cout << endl;

    vector<int> ans;
    int j = 0;

    for (int i = 0; i < nums.size(); )
    {

        if (total[j] > 2)
        {
            nums.erase(nums.begin() + i, nums.begin() + i + total[j] / 2);
            // i--;
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << "nums size: " << nums.size() << endl;

    cout << "ans: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}