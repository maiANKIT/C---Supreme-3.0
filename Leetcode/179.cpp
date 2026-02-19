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

    string x = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        x = x + s[i];
    }

    string nums1[] = {"3", "30", "34", "5", "9"};

    if (x == nums1)

        cout << x;

    return 0;
}