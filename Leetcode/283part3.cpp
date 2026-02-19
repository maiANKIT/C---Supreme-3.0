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
    cout << "enter the array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    // creatinng new array
    vector<int> arr;

    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            arr.push_back(nums[i]);
        }
        else
        {
            count++;
        }
    }

    cout << "Printing nums1: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
    cout << "Printing arr have no zero: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < count; i++)
    {
        arr.push_back(0);
    }
    cout << endl;

    cout << "Printing final arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "final array is: ";

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = arr[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}