#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the array: ";
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    cout << "initial array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        temp.push_back(nums[i]);
    }
    cout << "initial copy array: ";
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = 0;
    while (i < nums.size() && j < nums.size())
    {

        if (j < nums.size() - 1 && temp[j] == nums[i] && nums[i] == nums[j + 1])
        {
            temp[j] = i + 1;
            temp[j + 1] = i + 1;
            j = j + 2;
            i = 0;
        }
        else if (temp[j] == nums[i])
        {
            temp[j] = i + 1;
            j++;
            i = 0;
        }
        else
        {
            i++;
        }

        if (i == nums.size())
        {
            i = 0;
        }
    }

    cout << "final nums array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    cout << "final temp array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}