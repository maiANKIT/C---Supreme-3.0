#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    int size = nums.size() / 3;

    sort(nums.begin(), nums.end());

    cout << "sorted array: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    cout << endl;

    vector<int> count;
    int count1 = 1;

    int j = 0;
    for (int i = j + 1; i < nums.size(); i++)
    {

        if (nums[j] == nums[i])
        {
            count1++;
            j++;
        }
        else if (nums[j] < nums[i])
        {
            j++;
            count.push_back(count1);
            count1 = 1;
        }
    }

    count.push_back(count1);

    cout << "count: ";
    for (int i = 0; i < count.size(); i++)
    {

        cout << count[i] << " ";
    }

    cout << endl;
    cout << "erased common element: ";

    j = 0;
    for (int i = j + 1; i < nums.size();)
    {

        if (nums[j] == nums[i])
        {
            nums.erase(nums.begin() + j);
        }
        else
        {
            j++;
            i++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    cout << endl;

    // int j = 0;
    for (int i = 0; i < nums.size();)
    {
        if (count[i] > size)
        {

            i++;
        }
        else
        {
            nums.erase(nums.begin() + i);
            count.erase(count.begin() + i);
            // i++;
        }
    }

    cout << "final values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}