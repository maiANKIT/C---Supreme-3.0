#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the nums: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    bool inc = true, dec = true;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
            dec = false;
        if (nums[i] > nums[i + 1])
            inc = false;
    }

    cout << "dec: " << dec << endl;
    cout << "inc: " << inc << endl;

    return 0;
}