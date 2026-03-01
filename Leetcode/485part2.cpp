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
    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int count = 0;
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == 1)
        {
            count++;
            if (count > x)
                x = count;
        }
        else
        {
            count = 0;
        }
    }

    cout << "ans: " << x;

    return 0;
}