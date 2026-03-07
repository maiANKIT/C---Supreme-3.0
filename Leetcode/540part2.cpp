#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the values: ";
    vector<int> nums(n);

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int x = 0;
    int i = 0;
    while (i < nums.size())
    {

        if (i + 1 < nums.size() && nums[i] == nums[i + 1])
            i = i + 2;
        else if (i + 1 < nums.size() && nums[i] != nums[i + 1])
        {
            cout << "this is case2" << endl;
            x = nums[i];
            break;
        }
        else
        {
            cout << "this is case3" << endl;
            x = nums[i];
            i++;
        }
    }

    cout << x;

    return 0;
}