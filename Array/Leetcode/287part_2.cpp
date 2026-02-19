#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "enter the vector: " << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    cout << "entered values are: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    sort(nums.begin(), nums.end());

    cout << endl
         << "sorted values are: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "The duplicate value is: ";

    int found = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            found++;
            cout << nums[i];
            break;
        }
    }

    return 0;
}