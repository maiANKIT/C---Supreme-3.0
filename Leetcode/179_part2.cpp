#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<string> s(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        s[i] = to_string(nums[i]);
    }

        return 0;
}