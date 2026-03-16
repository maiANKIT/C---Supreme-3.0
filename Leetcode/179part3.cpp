#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    return 0;
}