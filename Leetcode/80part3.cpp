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

    int x = 2;

    for (int i = 2; i < nums.size(); i++)
    {

        if (nums[i] != nums[x - 2])
        {
            nums[x] = nums[i];
            x++;
        }
    }

    cout << "nums size: " << x << endl;

    cout << "ans: ";
    for (int i = 0; i < x; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}