#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int signFunc(int x)
{

    if (x == 0)
    {
        return 0;
    }
    else if (x > 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        return -1;
    }
}

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

    int multi = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        multi = multi * nums[i];
    }

    int x = signFunc(multi);
    cout << "ans: " << x;

    return 0;
}