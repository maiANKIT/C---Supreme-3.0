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

    int count = 1;
    int x = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i] < nums[i + 1])
        {
            count++;
            if (x < count)
            {
                x = count;
            }
        }
        else
        {
            count = 1;
        }
    }

    cout << "answer: " << x;

    return 0;
}