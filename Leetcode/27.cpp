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
    cout << "enter the size: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int val;
    cout << "enter the value to erase: ";
    cin >> val;

    for (int i = 0; i < nums.size();)
    {

        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
        }
        else
        {
            i++;
        }
    }

    cout << "size is: " << nums.size() << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}