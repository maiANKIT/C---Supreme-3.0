#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the no. elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "enter the elements: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cin >> nums[i];
    }

    int target;
    cout << "enter target sum: ";
    cin >> target;

    int i = 0;
    int j = i + 1;

    int n1 = -1;
    int n2 = -1;

    while (i < nums.size())
    {

        if (j == nums.size())
        {
            i++;
            j = i + 1;
            continue;
        }
        else if (nums[i] + nums[j] == target)
        {
            n1 = i;
            n2 = j;
            break;
        }
        else if (j <= nums.size())
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << "[" << n1 << "," << n2 << "]" << endl;
    return 0;
}